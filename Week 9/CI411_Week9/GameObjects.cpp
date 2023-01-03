// ======================================================
// Program Name// Author UoBGames, Date
// =======================================================
// The class methods (function definitions) go in the source C++ file


//libraries to include
#include <iostream>
using namespace std;
//Own files
#include "GameObjects.h"
//Outside methods


//==============================================
//Character Class Methods
void Character::displayStats()
{
    cout << "\n\nPlayer name: " << name << "\nhealth: " << health << "\nSpeed: " << speed << "\nis alive: " << isAlive;

}
void NPC::displayStats()
{
    cout << "\n\n we are the " << faction << ". " << message;
}
void PC::displayStats()
{
    cout << "\n\nPC is carrying " << potionCarrying << ".  They have " << mana << " mana.";
}
void Character::checkIsAlive()
{
    if (health == 0)
    {
        isAlive = false;
    }
}

//=============================================
//Derived Classes
Character::Character(string nameSent, float healthSent)
{
    name = nameSent;
    health = healthSent;
    cout << "\n\n" << name << " has spawned, be scared!" << "\nHealth: " << health;

}

PC:: PC()
{ 
    cout << "\n A PC has spawned"; 
}


PC::PC(string nameSent, int healthSent, string potionCarried, int manaSent)
{
    name = nameSent;
    health = healthSent;
    potionCarrying = potionCarried;
    mana = manaSent;

    cout << "\n\n Player " << name << " has " << health << " health and " << mana << " mana. " << "\nThey have got the " << potionCarrying;

}

