#include "Character.cpp"
#include "Wizard.cpp"
#include "Warrior.cpp"
#include <vector>

void introduce(Character &c)
{
    c.display();
}

int main()
{
    /* Character *chris = new Character("Chris", 100); */
    Wizard *amine = new Wizard("Amine", 120, 200);
    Warrior *othmane = new Warrior("Othmane", 150, 100);

    /* introduce(chris);
    introduce(amine);
    introduce(othmane); */

    vector<Character *> characters;
    // characters.push_back(chris);
    characters.push_back(amine);
    characters.push_back(othmane);
    characters.push_back(new Wizard("Mohamed", 100, 180));

    characters[1]->display();
    characters[2]->display();

    cout << characters[1]->getWeapon() << endl;
    cout << characters[2]->getWeapon() << endl;

    for (int i = 0; i < characters.size(); i++)
    {
        delete characters[i];
        characters[i] = 0;
    }

    return 0;
}