#include "HealthPotion.h"

std::string HealthPotion::ToString()
{
    return this->itemName + " healing potion. \nHeals for " + std::to_string(this->healAmount) + " HP.\n";
}

void HealthPotion::use(Hero* hero)
{
    std::cout << itemName << " healing potion used." << std::endl;
    hero->healSelf(this->healAmount);
}
