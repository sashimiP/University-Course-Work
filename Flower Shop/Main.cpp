#include "Functions.h"

int main()
{
	unsigned short operation;
	vector<Plants*>plants;
	vector<Plants*>redFlowers;

	cout << "\t**MENU**\n";
	cout << "\t-1- Add a new plant.\n";
	cout << "\t-2- Display all the available plants.\n";
	cout << "\t-3- Display most expensive plant.\n";
	cout << "\t-4- Create an array of all the red flowers and display it.\n";
	do {
		cout << "Choose an operation or press 0 to exit.\n";
		cin >> operation;
		switch (operation) {
		case 1: addNewPlant(plants); break;
		case 2: displayAllPlants(plants); break;
		case 3: displayMostExpPlat(plants); break;
		case 4: RedFlowers(plants, redFlowers); break;
		case 0: break;
		default:cout << "Wrong operation\n"; break;
		}

	} while (operation != 0);
	

	return 0;
}
