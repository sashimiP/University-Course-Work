#pragma once
#include"Plants.h"

//is derived from Plants
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
	
};
