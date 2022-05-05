#include "Sword.h"

std::string Sword::ToString()
{
	return this->itemName + ".\nAdds " + std::to_string(this->bonusDamage_) + " bonus damage.\n";
}

void Sword::use(Hero* hero)
{
	std::cout << itemName << " equiped.\n";
	hero->setBonusDmg(this->bonusDamage_);

	// Circular dependency
	// hero->equipSword(*this); // passing REFERENCE to this object
	// hero->equipSword(this); // passing pointer to this object
}
