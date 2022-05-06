#pragma once
#include"Plants.h"

class Trees: public Plants
{
private:
	unsigned int height{};
	string treeType{};

public:
	void EnterData();
	void Display() const;
	void SetType(string type);
	float GetPrice() const;
	string StringToTitle(string name) const;
	
};
