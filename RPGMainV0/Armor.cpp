#include "Armor.h"

std::string Armor::ToString()
{
    return this->itemName + ".\nAdds " + std::to_string(this->bonusArmor) + " bonus armor.\n";
}

void Armor::use(Hero* hero)
{
    std::cout << itemName << " equiped.\n";
    hero->setBonusArmor(this->bonusArmor );

    // Circular dependency
    // hero->equipArmor(*this); // passing REFERENCE to this object
    // hero->equipArmor(this); // passing POINTER to this object
}
