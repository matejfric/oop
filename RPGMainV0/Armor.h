#pragma once
#include "Item.h"
#include <iostream>

class Armor :
    public Item
{
public:
    Armor(std::string s, int armor) : bonusArmor(armor), Item(s) {};
    virtual std::string ToString() override;
    virtual void use(Hero* hero) override;
private:
    int bonusArmor = 0;
};

