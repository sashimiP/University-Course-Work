#include "Functions.h"

void addNewPlant(vector<Plants*>& plants)
{
	system("cls");
	enum PlantType { TREE, FLOWER };
	unsigned short type{};

	cout << "Choose plant type\n";
	do {

		cout << "Press '0' for Tree or '1' for Flower\n";
		cin >> type;
		if (type == TREE)
		{
			plants.push_back(new Trees());
			plants[plants.size() - 1]->SetType("Tree");

		}
		else if (type == FLOWER)
		{
			plants.push_back(new Flowers());
			plants[plants.size() - 1]->SetType("Flower");
		}
		else
		{
			
			cout << "Wrong key!";
			
		}

	} while ((type != TREE) && (type != FLOWER));

	plants[plants.size() - 1]->EnterData();
	Sleep(500);
	system("cls");
	DisplayMenu();
}

inline void displayAllPlants(const vector<Plants*>& plants)
{
	system("cls");
	
	cout << "All Available Plants:\n";
	for (int i = 0; i < plants.size(); i++)
	{
		plants[i]->Display();
	}
	
	system("pause");


	system("cls");
	DisplayMenu();
}

void displayMostExpPlat(const vector<Plants*>& plants)
{
	system("cls");
	vector<float>tempPrice;
	for (int i = 0; i < plants.size(); i++)
	{
		tempPrice.push_back(plants[i]->GetPrice());
	}

	sort(tempPrice.begin(), tempPrice.end());
	reverse(tempPrice.begin(), tempPrice.end());

	cout << "The most expensive plant is:\n";
	for (int i = 0; i < plants.size(); i++)
	{
		if (plants[i]->GetPrice() == tempPrice[0])
		{
			plants[i]->Display();
		}
	}
	system("pause");
	system("cls");
	DisplayMenu();

}

void RedFlowers(const vector<Plants*>& plants, vector<Plants*>& redFlowers)
{
	system("cls");
	cout << "List of all the red flowers:\n";
	for (int i = 0; i < plants.size(); i++)
	{
		if (plants[i]->GetColour() == "red" || plants[i]->GetColour() == "Red")
		{
			redFlowers.push_back(plants[i]);
			
		}
	}
	for (int i = 0; i < redFlowers.size(); i++)
	{
		redFlowers[i]->Display();
	}
	system("pause");
	system("cls");
	DisplayMenu();
}

inline void DisplayMenu()
{
	cout << "\t**MENU**\n";
	cout << "\t-1- Add a new plant.\n";
	cout << "\t-2- Display all the available plants.\n";
	cout << "\t-3- Display most expensive plant.\n";
	cout << "\t-4- Create an array of all the red flowers and display it.\n";
}

void MenuOptions(vector<Plants*>&plants, vector<Plants*>&redFlowers)
{
	char operation{};
	do {
		cout << "Choose an operation or press 0 to exit.\n";
		cin >> operation;
		switch (operation) {
		case '1': addNewPlant(plants); break;
		case '2': displayAllPlants(plants); break;
		case '3': displayMostExpPlat(plants); break;
		case '4': RedFlowers(plants, redFlowers); break;
		case '0': return;
		default:cout << "Wrong operation\n"; break;
		}

	} while (operation != 0);

}
