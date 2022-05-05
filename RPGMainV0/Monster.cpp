#include "Monster.h"

Monster::Monster(int HP, int baseDmg, std::string reward): Sprite(HP,baseDmg)
{
	this->reward = reward;
}

std::string Monster::getReward()
{
	return this->reward;
}

bool Monster::getHit(int dmg)
{
	this->takeDmg(dmg);
	std::cout << "Monster was hit and took " << dmg << " damage.\n";
	return this->isAlive();
}

void Monster::isDead()
{
	std::cout << "Enemy \"Monster\" has been killed." << std::endl;
	std::cout << "Reward: " << this->getReward() << std::endl;
}
