#include "Sprite.h"

int Sprite::objectCount = 0;

Sprite::Sprite(int HP, int baseDmg)
{
	this->HP = HP;
	this->baseDamage = baseDmg;
	Sprite::objectCount++;
}

Sprite::~Sprite()
{
	Sprite::objectCount--;
}

bool Sprite::isAlive()
{
	return this->HP > 0;
}

void Sprite::increaseDmg(int dmg)
{
	this->baseDamage += dmg;
}

// Virtual method
//bool Sprite::getHit(int attackingdmg)
//{
//	int finalDmg = attackingdmg;
//
//	this->HP -= finalDmg;
//	std::cout << "Sprite's HP was reduced by " << finalDmg << std::endl;
//	
//	return isAlive();
//}

bool Sprite::takeDmg(int dmg)
{
	this->HP -= dmg;
	return this->isAlive();
}

void Sprite::attack(Sprite* targetSprite)
{
	int finalDmg = this->baseDamage;

	bool isAlive = targetSprite->getHit(finalDmg);
	
	if (!isAlive)
	{
		targetSprite->isDead();
		//std::cout << "Enemy sprite has been killed" << std::endl;
	}
}


