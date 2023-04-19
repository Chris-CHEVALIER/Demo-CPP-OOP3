#include "Character.hpp"
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Warrior : public Character
{
private:
    int atk;

public:
    Warrior();
    Warrior(string newName, int newLife, int atk);
    void display() const;
    string getWeapon() const;
};