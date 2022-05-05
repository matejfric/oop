#pragma once

#include "Sprite.h"

// Circular dependency
// #include "Item.h"
// #include "Sword.h"
// #include "Armor.h"

#include <string>
#include <vector>


class Hero : public Sprite
{
public:
	Hero(int HP, int baseDmg, std::string name);

	void changeName(std::string name);
	void healSelf(int HP);
	std::string getName();

	void setBonusDmg(int bonusDmg) { this->increaseDmg(bonusDmg); };
	void setBonusArmor(int bonusArmor) { this->setArmor(bonusArmor); };

	// Circular dependency
	//void equipArmor(Armor& armor) { this->armor = armor; }
	//void equipSword(Sword& sword) { this->sword = sword; }

	//pointer to void doesn't make any sense here
	//void equipArmor(void* armor) { this->armor = armor; }
	//void equipSword(void* sword) { this->sword = sword; }
	//void useSword() { std::cout << this->getName() << " is using sword: " << this->sword->ToString(); } // calling a method on void*

private:
	// Circular dependency
	// Sword sword;
	// Armor armor;

	void isDead() override;
	bool getHit(int dmg) override;
	std::string name;
};

