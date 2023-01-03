// CI411_Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;

float circleArea(float radius);
float circumferenceCircle(float radius2);
float hypotenuse(float adjacent, float opposite);
void startScreen();
void mainMenu();
void calculation();
void combatExample();
void missileAttack();

int score = 0;
bool gameEnd = false;

int main()
{
    startScreen();

    

    while (!gameEnd)
    {
        mainMenu();
    }


    return 0;
}
void startScreen()
{
    cout << "------------------------------------------------ " << endl;
    cout << "--------------Welcome To The Game--------------- " << endl;
    cout << "------------------------------------------------ " << endl;
}


void mainMenu()
{

    cout << "\n\n=== Main menu ===" << endl << endl;
    cout << " Please select the program: " << endl;
    cout << " 1 : Calculations " << endl;
    cout << " 2 : Combat " << endl;
    cout << " 3 : Missile Attack " << endl;
    cout << " 4 : End Program " << endl;
	int option;
	cin >> option;
	if (option == 1)
	{
		calculation();
	}
	else if (option == 2)
	{
        combatExample();
	}
	else if (option == 3)
	{
		missileAttack();
	}
	else if (option == 4)
	{
        gameEnd = true;
	}
    else
    {
        gameEnd = true;
    }
}
//
//void endScreen()
//{
//
//}
//
void combatExample()
{
	srand(static_cast<unsigned int>(time(0)));
	// This is the game variables 
	int npcHP = 100, pcHP = 100, pcAttack = 50, npcAttack = 50, pcModifier, npcModifier, playerOption;
	bool gameOver = false;

	while (gameOver == false)
	{
		cout << "------------------------------------------------ " << endl;
		cout << "-------------Please select an action------------ " << endl;
		cout << "------------------------------------------------ " << endl;
		cout << "\n 1: Attack";
		cout << "\n 2: Brace";
		cout << "\n 3: Dodge";
		cout << "\n\n Choice: ";
		cin >> playerOption;

		if (playerOption == 1)
		{
			cout << "\n 1: Attack Selected \n";
			pcModifier = rand() % 5 + 1;
		}
		else if (playerOption == 2)
		{
			cout << "\n 2: Brace Selected \n";
			pcModifier = rand() % 4 + 1;
		}
		else if (playerOption == 3)
		{
			cout << "\n 3: Dodge Selected \n";
			pcModifier = rand() % 3 + 1;
		}
		else
		{
			cout << "\n Not a valid option \n";
			pcModifier = 100;
		}


		npcModifier = rand() % 4 + 1;

		cout << "\n PC Attack = " << pcAttack * 1 / pcModifier;
		cout << "\n NPC Attack = " << npcAttack * 1 / npcModifier;

		npcHP -= pcAttack * 1 / pcModifier;
		pcHP -= npcAttack * 1 / npcModifier;

		cout << "\n\n";
		cout << "\n New PC health : " << pcHP;
		cout << "\n New NPC health : " << npcHP;

		if (pcHP <= 0 || npcHP <= 0)
		 gameOver = true;
	}

	cout << "\n\n==============================================================\n\n ";
	if (pcHP <= 0)
	{
		cout << "\n You Lost";
		
	}
	else if (npcHP <= 0)
	{
		cout << "\n You Won";
	}

}

float circleArea(float radius)
{
    float pi = 3.142;
    float area = radius * radius * pi;
    return area;
}

float circumferenceCircle(float radius2)
{
    float pi = 3.142;
    float circumference = 2 * pi * radius2;
    return circumference;
}

float hypotenuse(float adjacent, float opposite)
{
	int test = 3;
	test = test ^ 2;

    float c = sqrt(pow(adjacent, 2) + pow(opposite, 2));
    return c;
}
void calculation()
{
	// the area of a circle
	cout << circleArea(5);
	cout << endl << circumferenceCircle(5);
	cout << endl << hypotenuse(5, 5);
}
void missileAttack()
{
	//Missile Calculations: time taken
	   cout << endl << endl << " Wait! OH NO A MISSILE IS COMING!! " << endl;
	   cout << "---------------------------------" << endl << endl;
	   float missileSpeed;
	   int range;
	   cout << endl << endl << " let us fire back! Enter the milliles speed (m/s) :  " << endl;
	   cin >> missileSpeed;
	   cout << endl << endl << " Now where are we firing? Enter the milliles range (m) :  " << endl;
	   cin >> range;
	   cout << "Time untill until impact : " << range / missileSpeed << " Seconds" << endl << endl;

	   //Calculating Damage 
	   cout << endl << endl << " We have been hit again! can u calculate the damage we have retained through our shields? " << endl;
	   float hp = 100, attack, shield;

	   cout << endl << "Base integrity = " << hp;
	   cout << endl << "Please input the millile strength : " << endl;
	   cin >> attack;
	   cout << endl << "Please input the shield power 0 - 100% : " << endl;
	   cin >> shield;
	   cout << endl << " The current base integrity is  " << hp - (attack * ((100 - shield) / 100));
}


// Calculate the circumference of a circle, the result should be a return value.
// Calculate the hypotenuse of a right-angle triangle. Two parameters will need specifying for the other two sides length. 
//The result should be a return value.Use Pythagoras TheoremYou will need to the square root command - sqrt(