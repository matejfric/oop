#pragma once
#include "Item.h"
#include <iostream>

class Sword :
    public Item
{
public:
    Sword(std::string s, int bonusDamage): bonusDamage_(bonusDamage), Item(s) {};
    virtual std::string ToString() override;
    virtual void use(Hero* hero) override;
private:
    int bonusDamage_;
};

