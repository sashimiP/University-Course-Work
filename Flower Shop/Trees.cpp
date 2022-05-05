#include "Trees.h"
void Trees::EnterData()
{
	cout << "Enter "<<type<<"\n";
	cout << "Name: "; getline(cin>>std::ws, name);
	cout << "Price(lv): "; cin >> price;
	cout << "Quantity: "; cin >> quantity;
	cout << "Height(meters): "; cin >> height;
	cout << "Type(evergreen/broad leaved): "; getline(cin>>std::ws, treeType);
}

void Trees::Display() const
{
	cout << "Plant type: "<<type<<endl;
	cout << "Name: " << name<<endl;
	cout << "Price: " << price<<" lv"<<endl;
	cout << "Available quantity: " << quantity<<endl;
	cout << "Height: " << height << "m" << endl;
	cout << "Type: " << type << endl;
}

void Trees::SetType(string type)
{
	this->type = type;
}

float Trees::GetPrice() const { return price; }
