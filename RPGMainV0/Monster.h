#pragma once

#include "Sprite.h"
#include <string>

class Monster : public Sprite
{
public:
	Monster(int HP, int baseDmg, std::string reward);

private:
	std::string getReward();
	bool getHit(int dmg) override;
	void isDead() override;

	std::string reward;
};

