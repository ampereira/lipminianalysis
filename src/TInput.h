#ifndef LIP_TINPUT
#define LIP_TINPUT

#include <vector>
#include <string>

class TInput {
	std::vector<std::string> p_Type;
	std::vector<std::string> p_Name;

public:
	TInput(void);
	~TInput(void);
	inline void File (std::string Type, std::string Name) { p_Type.push_back(Type); p_Name.push_back(Name); }
	inline std::string Type (int j) { return p_Type[j]; }
	inline std::string Name (int j) { return p_Name[j]; }
	inline int size (void) { return p_Type.size(); }
};

#endif
