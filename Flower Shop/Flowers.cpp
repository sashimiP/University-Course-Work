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
	cout << "\t\t\tPlant type: " << type << endl;
	cout <<"\t\t\tName: " << name << endl;
	cout <<"\t\t\tPrice: " << price <<" lv"<< endl;
	cout << "\t\t\tAvailable quantity: " << quantity << endl;
	cout << "\t\t\tColour: " << colour << endl<<endl;
	
}

void Flowers::SetType(string type)
{
	this->type = type;
}

float Flowers::GetPrice() const { return price; }

string Flowers::GetColour() const { return colour; }
