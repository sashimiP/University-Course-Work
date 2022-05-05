#pragma once
#include"Trees.h"
#include"Flowers.h"

void addNewPlant(vector<Plants*>&plants)
{
	system("cls");
	enum PlantType{TREE, FLOWER};
	unsigned short type{};

	cout << "Choose plant type\n";
	do {
		
		cout << "Press '0' for Tree or '1' for Flower\n";
		cin >> type;
		if ((type != TREE) && (type != FLOWER))
		{
			cout << "Wrong key!";
		}
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
	} while ((type != TREE) && (type != FLOWER));
	plants[plants.size() - 1]->EnterData();
	Sleep(500);
	system("cls");
	cout << "\t**MENU**\n";
	cout << "\t-1- Add a new plant.\n";
	cout << "\t-2- Display all the available plants.\n";
	cout << "\t-3- Display most expensive plant.\n";
	cout << "\t-4- Create an array of all the red flowers and display it.\n";
}

void inline displayAllPlants(const vector<Plants*>& plants)
{
	system("cls");
	cout << "All Available Plants:\n";
	for (int i = 0; i < plants.size(); i++)
	{
		plants[i]->Display();
	}
	Sleep(4000);
	system("cls");
	cout << "\t**MENU**\n";
	cout << "\t-1- Add a new plant.\n";
	cout << "\t-2- Display all the available plants.\n";
	cout << "\t-3- Display most expensive plant.\n";
	cout << "\t-4- Create an array of all the red flowers and display it.\n";
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

	cout << "The most expensive plants is:\n";
	for (int i = 0; i < plants.size(); i++)
	{
		if (plants[i]->GetPrice() == tempPrice[0])
		{
			plants[i]->Display();
		}
	}
	Sleep(4000);
	system("cls");
	cout << "\t**MENU**\n";
	cout << "\t-1- Add a new plant.\n";
	cout << "\t-2- Display all the available plants.\n";
	cout << "\t-3- Display most expensive plant.\n";
	cout << "\t-4- Create an array of all the red flowers and display it.\n";

}

void RedFlowers(const vector<Plants*>& plants, vector<Plants*>&redFlowers)
{
	for (int i = 0; i < plants.size(); i++)
	{
		if (plants[i]->GetColour() == "red" || plants[i]->GetColour() == "Red")
		{
			redFlowers.push_back(plants[i]);
			redFlowers[i]->Display();
		}
	}

}
