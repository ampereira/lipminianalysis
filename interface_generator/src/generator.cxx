#include "generator.h"

using namespace std;

// Trims a string, removing tabs and spaces
vector<string> tokenize (string line) {

	vector<string> output;
	string current;

	for (unsigned it = 0; it < line.size(); it++) {
		if (!create_tokens) {
			if (line.size() >= 8) {
				if (line[0] == '\t' && line[1] == 'p' && line[2] == 'u' && line[3] == 'b' && 
					line[4] == 'l' && line[5] == 'i' && line[6] == 'c' && line[7] == ':') {
					create_tokens = true;
					return output;
				}
			}
		} else {
			if (line.size() >= 10) {
				if (line[0] == '\t' && line[1] == '/' && line[2] == '/' && line[3] == 'e' && 
					line[4] == 'n' && line[5] == 'd' && line[6] == '_' && line[7] == 'v' && 
					line[8] == 'a' && line[9] == 'r') {
					create_tokens = false;
					return output;
				}
			}

			// if the current char is a tab and the next is a comma or semicolon removes it
			if (line[it] == ' ' || line[it] == '\t' || line[it] == ',' || line[it] == ';') {
				if (current.size() > 0) {
					output.push_back(current);
					current.clear();
				}
			} else {
				current += line[it];
			}
		}
	}
	return output;
}

void parseElements (vector<string> elements) {
	unsigned j = 0;

	if (create_tokens) {
		// Check if the line is a comment
		if ((elements[0].at(0) == '/' && elements[0].at(1) == '/') ||
			(elements[0].at(0) == '/' && elements[0].at(0) == '*'))
			return;

		// Check if the first element is a type
		for (unsigned i = 0; i < MAX_TYPES; ++i) {
			if (elements[0].compare(types[i]) == 0) {
				last_type = i;
				type_changed = true;
			}
		}

		if (type_changed)
			j = 1;

		// adds the variables to the types
		for (; j < elements.size(); ++j) {
			// Insert if the element is not a comment
			if (!((elements[j].at(0) == '/' && elements[j].at(1) == '/') ||
				(elements[j].at(0) == '/' && elements[j].at(1) == '*'))) {
				unsigned ik;
				
				for (ik = 0; ik < MAX_TYPES && elements[j].compare(types[ik]) != 0; ++ ik);
				
				if (ik == MAX_TYPES){
					variables.insert(pair<string, unsigned>(elements[j], last_type));
				}
			}
		}
	}
}

// Reads a line from the input file
void parseLines (string file) {
	ifstream input (file.c_str(), ifstream::in);
	string line;

	while (getline(input, line)) {
		vector<string> elements;
		type_changed = false;
		// 1: trim spaces and tabs
		elements = tokenize(line);
		// 2: check if the first element is a type
		if (elements.size())
			parseElements(elements);
	}
}

void writeDefines (void) {
	of << endl << "/*" << endl << " *\t defines below" << endl << " */" << endl << endl << endl;

	for (map<string, unsigned>::iterator it = variables.begin(); it != variables.end(); ++it)
		of << "#define " << it->first << " events.at(Event::event_counter)." << it->first << endl;
}

void writeInterface (string output) {
	of.open(output.c_str(), fstream::out);

	of << "// ###################################################################################" << endl;
	of << "//" << endl;
	of << "//							!!Disclaimer!!" << endl;
	of << "//" << endl;
	of << "// ###################################################################################" << endl;
	of << "//" << endl;
	of << "// Add variables in the EventData class, between the public and //end_var statements" << endl;
	of << "//" << endl;
	of << "// ###################################################################################" << endl;
	of << endl;
	of << "#include \"EventData.h\"" << endl;
	of << "#include <vector>" << endl;
	of << "extern std::vector<Event::EventData> events;" << endl;

	writeDefines();
}

int main (int argc, char* argv[]) {

	if (argc < 3) {
		cout << "EventData file name and/or source directory not passed" << endl;
		cout << "Pass it in the \"./EDGen dir file\" format" << endl;
		return -1;
	}

	stringstream ss1, ss2;
	string file1, file2;

	ss1 << argv[1] << "/" << argv[2];
	ss1 >> file1;

	ss2 << argv[1] << "/EventDataInterface.h";
	ss2 >> file2;

	parseLines(file1);

	writeInterface(file2);

	return 0;
}
