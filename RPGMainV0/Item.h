#pragma once
#include <string>
#include "Hero.h"

class Item
{
public:
	Item(std::string s) : itemName(s) {};

	virtual std::string ToString() = 0;
	virtual void use(Hero* hero) = 0;

protected:
	std::string itemName;
private:
};

