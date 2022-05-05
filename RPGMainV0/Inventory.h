#pragma once
#include "Item.h"
#include "Hero.h"

#include <vector>
#include <iostream>

class Inventory
{
public:
	Inventory(Hero* hero) : hero(hero) {};

	std::vector<Item*> getInventory();
	void PrintAllItems();
	void addItem(Item* item);
	void useItem(size_t index);

private:
	std::vector<Item*> items;
	Hero* hero;
};

