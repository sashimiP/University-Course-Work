#pragma once
#include"Plants.h"

//is derived from Plants
class Flowers: public Plants
{
private:
	string colour{};
public:
	void EnterData();
	void Display() const;
	void SetType(string type);
	float GetPrice() const;
	string GetColour() const;
	
};
