#pragma once
#include"Trees.h"
#include"Flowers.h"

void addNewPlant(vector<Plants*>& plants);

void inline displayAllPlants(const vector<Plants*>& plants);

void displayMostExpPlat(const vector<Plants*>& plants);

void RedFlowers(const vector<Plants*>& plants, vector<Plants*>& redFlowers);

inline void DisplayMenu();

void MenuOptions(vector<Plants*>&plants, vector<Plants*>&redFlowers);
