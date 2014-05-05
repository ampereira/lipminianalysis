#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

#define MAX_TYPES 13

std::string types[MAX_TYPES] = {"int", "float", "Int_t", "TLorentzVector",
	"std::vector<TLorentzVectorWFlags>", "std::vector<TVector3>", "double",
	"long int", "long unsigned", "long long int", "long long unsigned", "long", "unsigned"};

unsigned last_type;
bool type_changed;
bool create_tokens = false;
std::ofstream of;
std::map<std::string, unsigned> variables;
