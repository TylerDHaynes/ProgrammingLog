// =======================================================
// OOP - Classes
// Tyler Haynes th800 UoBGames, 23/11/2022
// =======================================================

//Libraries to include
#include <iostream>
using namespace std;

// =======================================================
// Function Declaration
void calculations();

//=======================================================
//Classes
//Task 1
// 
//circle class

class Circle
{
public:
	float radius;

	float getArea()
	{
		return pi* radius* radius;
	}
	float getCircumference()
	{
		return 2 * pi * radius;
	}

private:

	float pi = 3.141;

};


//square class
class Square
{
public:

	float sideLength;

	float getArea()
	{
		return sideLength * sideLength;
	}
	float getPerimeter()
	{
		return sideLength * 4;
	}
};


//task 2
class Character
{
public:
	float health, speed, stamina, strength;
	int xp = 0;
	string name, weapon;
	bool armed = true, isAlive = true;

	float checkIsAlive()
	{
		if (health < 1)
		{
			cout << "You died";
			return isAlive = false;
		}
	}
};



//=========================================================
//global variables


//main function

int main()
{
	// task 1
	calculations();

	//task 2
	Character player1;
	Character npc1;
	Character npc2;
	//displaying starts:
	player1.name = "\n\nFred Johnson\n";
	player1.health = 100;
	player1.xp = 0;
	player1.stamina = 5;
	player1.speed = 10;

	cout << "\n\n\nPlayer character is called: " << player1.name << "\n\n HP: " << player1.health << "  XP: " << player1.xp << "  Stamina: " << player1.stamina << "  Speed: " << player1.speed;
    return 0;
}


//==========================================================
//Functions
void calculations()
{
	printf("\n\n Shapes Examples with classes \n ");
	printf("\n\n Circle Example \n ");
	printf("\n\n Please input the Ammount for our radius:  \n ");
	Circle circle1;
	cin >> circle1.radius;

	cout << "The radius = " << circle1.radius;

	printf("\n\n So this means that the Area is:   \n ");
	cout << circle1.getArea();

	printf("\n\n So this means that the Circumferance is:   \n ");
	cout << circle1.getCircumference();

	printf("\n\n Square Example  \n ");
	printf("\n\n Please input the Ammount for our side length:  \n ");

	Square square1;
	cin >> square1.sideLength;

	cout << "The side length = " << square1.sideLength;

	printf("\n\n So this means that the Area is:   \n ");
	cout << square1.getArea();

	printf("\n\n So this means that the Perimeter is:   \n ");
	cout << square1.getPerimeter();
}
