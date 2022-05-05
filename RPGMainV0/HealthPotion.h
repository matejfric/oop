#pragma once

#include "Item.h"
#include <iostream>

class HealthPotion :
    public Item
{
public:
    HealthPotion(std::string s, int healAmount) : Item(s) { this->healAmount = healAmount; };

    // Inherited via Item
    virtual std::string ToString() override;
    virtual void use(Hero* hero) override;

private:
    int healAmount;
};
