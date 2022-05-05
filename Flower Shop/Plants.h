#include<vector>
#include<string>
#include<windows.h>
#include<algorithm>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

class Plants
{
protected:
	string name{};
	float price{};
	unsigned int quantity{};
	string type;
public:
	void virtual EnterData() = 0;
	void virtual Display() const = 0;
	void virtual SetType(string type) = 0;
	float virtual GetPrice() const = 0;
	string virtual GetColour() const { return ""; }
};
