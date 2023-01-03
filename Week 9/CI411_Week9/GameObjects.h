#pragma once

//The declarations of the Classes and Methods

//Parent Class
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
    void checkIsAlive();

    void displayStats();
};

//Child Classes
class NPC : public Character
{
public:
    string faction = "Red Men";
    string message = "I have come to eat you";

    NPC() { cout << "\n An NPC has spawned "; }
    void displayStats();

};

class PC : public Character
{
public:
    string potionCarrying;
    int mana = 50;
    
    PC();
    PC(string nameSent, int healthSent, string potionCarried, int manaSent);

    void displayStats();
};