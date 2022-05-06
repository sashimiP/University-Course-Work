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
	cout << "\t\t\tPlant type: "<<type<<endl;
	cout << "\t\t\tName: " << name<<endl;
	cout << "\t\t\tPrice: " << price<<" lv"<<endl;
	cout << "\t\t\tAvailable quantity: " << quantity<<endl;
	cout << "\t\t\tHeight: " << height << "m" << endl;
	cout << "\t\t\tType: " << treeType << endl<<endl;
}

void Trees::SetType(string type)
{
	this->type = type;
}

float Trees::GetPrice() const { return price; }
