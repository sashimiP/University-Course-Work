#include "Flowers.h"

void Flowers::EnterData()
{
	cin.ignore();
	cout << "Enter "<<type<<":\n";
	cout << "Name: "; getline(cin>>std::ws,name);
	cout << "Price(lv): "; cin >> price;
	cout << "Quantity: "; cin >> quantity;
	cout << "Colour: "; getline(cin>>std::ws,colour);
	
}

void Flowers::Display() const
{
	cout << "Plant type: " << type << endl;
	cout <<"Name: " << name << endl;
	cout <<"Price: " << price <<" lv"<< endl;
	cout << "Available quantity: " << quantity << endl;
	cout << "Colour: " << colour << endl;
	
}

void Flowers::SetType(string type)
{
	this->type = type;
}

float Flowers::GetPrice() const { return price; }

string Flowers::GetColour() const { return colour; }
