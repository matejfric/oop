#pragma once
#include <iostream>

class Sprite
{
public:
	Sprite(int HP, int baseDmg);
	~Sprite();

	virtual bool getHit(int dmg) = 0;
	virtual void isDead() = 0;

	bool isAlive();
	bool takeDmg(int dmg);
	void attack(Sprite* targetSprite);
	void increaseDmg(int dmg);
	void setArmor(int armor) { this->armor = armor; }
	void healSprite(int heal) { this->HP += heal; }

	static int objectCount;

private:
	int armor = 0;
	int HP;
	int baseDamage;
};

