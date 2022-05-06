#pragma once
#include"Plants.h"
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
	string StringToTitle(string name) const;

};
