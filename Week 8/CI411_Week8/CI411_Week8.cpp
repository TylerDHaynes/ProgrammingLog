// ===================================================
// Polymorphism
// Tyler Haynes th800, 30/11/2022
// ===================================================

//libraries to include
#include <iostream>
using namespace std;

// =======================================================
// Function Declaration



// =======================================================
// Classes
class Character
{
public:
    string name;
    float health = 100;
    float speed = 50;
    bool isAlive = true;
    
    //default constructor
    Character() { cout << "\nCharacter Creation"; }

    //Constructor with parameter passed
    Character(string nameSent, float healthSent);

    

    //method declaration
    void checkIsAlive()
    {
        if (health == 0)
        {
            isAlive = false;
        }
    }
    void displayStats();
};

class NPC : public Character
{
public:
    string faction;
    string message;

    NPC() { cout << "\n An NPC has spawned "; }


};

class PC : public Character
{
public:
    string potionCarrying;
    int mana;

    PC() { cout << "\n A PC has spawned"; }

    PC(string nameSent, int healthSent, string potionCarried, int manaSent);
};

// =======================================================
// Global Variables

// =======================================================
int main()
{
    //setup
    cout << "\nCreation of player charecters default constructors: ";
    Character player1;
    Character player2;
    // setting the names manually
    player1.name = "Tyler";
    player2.name = "Raz";

    //object created with parameters
    cout << "\n\nParameters passed to the class as it is called.\n";

    Character player3("Greg", 100);
    Character player4("Mercy", 50);

    cout << "\nPlayer stats: \n\n";
    player1.displayStats();
    player2.displayStats();

    cout << "\n\nchecking if alive: \n\n";
    player2.health = 0;
    player2.checkIsAlive();
    player2.displayStats();

    cout << "\n\n Inheritance from classes: \n\n";
    PC play1("Fred", 100, "Potion of might", 60);
    NPC NPC1;

    //main function / loop
    return 0;
}

// =======================================================
// Functions & Class Methods


Character::Character(string nameSent, float healthSent)
{
    name = nameSent;
    health = healthSent;
    cout << "\n\n" <<  name << " has spawned, be scared!" << "\nHealth: " << health;

}
PC::PC(string nameSent, int healthSent, string potionCarried, int manaSent)
{
    name = nameSent;
    health = healthSent;
    potionCarrying = potionCarried;
    mana = manaSent;

    cout << "\n\n Player " << name << " has " << health << " health and " << mana << " mana. " << "\nThey have got the " << potionCarrying;

}
void Character::displayStats()
{
    cout << "\n\nPlayer name: " << name << "\nhealth: " << health << "\nSpeed: " << speed << "\nis alive: " << isAlive;

}



// =====================================================
