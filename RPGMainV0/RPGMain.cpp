// RPGMain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sprite.h"
#include "Hero.h"
#include "Monster.h"
#include "Inventory.h"
#include "Armor.h"
#include "Sword.h"
#include "HealthPotion.h"

int main()
{
    Hero h = Hero(100, 10, "Jacob");
    Monster m = Monster(50, 5, "Treasure");
    // Sprite s = Sprite(10, 15); // cannot create an object of virtual class

    h.attack(&m);
    h.attack(&m);
    h.attack(&m);
    h.attack(&m);

    m.attack(&h);

    h.attack(&m); 
    h.attack(&m); // multiple reward...

    std::cout << std::endl;

    Inventory* inv = new Inventory(&h);
    inv->addItem(new Sword("Fiery sword of purgatory", 20));
    inv->addItem(new Armor("Leather Jerkin", 5));
    inv->addItem(new HealthPotion("Small", 5));

    inv->PrintAllItems();

    inv->useItem(0);
    inv->useItem(1);
    inv->useItem(2);

    return 0;
}

