// ======================================================
// Program Name// Author UoBGames, Date
// =======================================================
//the classes will be included and used in the main C++ file to create objects



//libraries to include
#include <iostream>
using namespace std;
#include"GameObjects.h"

//===========================================
// Function Declaration



//===========================================
//Global Variables




//===========================================
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
    NPC1.displayStats();
    play1.displayStats();

    //main function / loop
    return 0;
}


//===========================================
// Functions



