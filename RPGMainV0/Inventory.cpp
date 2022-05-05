#include "Inventory.h"

std::vector<Item*> Inventory::getInventory()
{
	return this->items;
}

void Inventory::PrintAllItems()
{
	std::cout << "----------------------------" << std::endl;
	std::cout << this->hero->getName() << "'s Inventory:" << std::endl << std::endl;
	for (Item*& item : this->items)
		std::cout << item->ToString() << std::endl;
	std::cout << "----------------------------" << std::endl;
}

void Inventory::addItem(Item* item)
{
	this->items.push_back(item);
	//this->getInventory().push_back(item);
}

void Inventory::useItem(size_t index)
{
	this->items[index]->use(this->hero);
	//this->getInventory()[index]->use(this->hero);
}
