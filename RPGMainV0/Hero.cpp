#include "Hero.h"

Hero::Hero(int HP, int baseDmg, std::string name): Sprite(HP, baseDmg)
{
	this->name = name;
}

void Hero::changeName(std::string name)
{
	this->name = name;
}

void Hero::healSelf(int HP)
{
	this->healSprite(HP);
}

std::string Hero::getName()
{
	return this->name;
}

bool Hero::getHit(int dmg)
{
	this->takeDmg(dmg);
	std::cout << "Hero " << this->name << " was hit and took " << dmg << " damage.\n";
	return this->isAlive();
}

void Hero::isDead()
{
	std::cout << "Hero " << this->getName() << "has been slain." << std::endl;
	std::cout << "Respawning..." << std::endl;
	this->healSelf(1);
}

