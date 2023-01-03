// --------------------------------------------------------------------------
// -----------------------CI411_Week2
// -----------------------Tyler Haynes, UoB 2022
//---------------------------------------------------------------------------

#include <iostream>
using namespace std;


int main()
{
    int x = 20, y = 18;

	if (x == y)
	{
		cout << " x is equal to y " << endl;
	}
	if (x != y)
	{
		cout << " x is not equal to y " << endl;
	}
	if (x > y)
	{
		cout << " x is greater than y " << endl;
	}
	if (x < y)
	{
		cout << " x is less than equal y " << endl;
	}

	int score;

	cout << " Please enter your score: " << endl;
	cin >> score;
	if (score >= 500)
	{
		cout << "Nice score could it be the best though? " << endl;
		if (score >= 1000)
		{
			cout << " That is one of the best scores! ";
		}
	}
	else
	{
		cout << " you have tried your best! ";
	}
	// Variables for stats of PC
	int playerChoice;
	string survivor, ability;
	float damage, coolDown, attack;

	cout << endl << " Select your apocalypse survivor: " << endl;
	cout << "1: The Titan " << endl;
	cout << "2: The School Teacher " << endl;
	cout << "3: The Bandit " << endl;
	cout << " The Nobody " << endl;

	cin >> playerChoice;
	switch (playerChoice)
	{
	case 1:
		//The Titan
		survivor = " The Titan ";
		ability = " Crush ";
		damage = 100;
		coolDown = 2;
		break;
	case 2:
		//The School Teacher
		survivor = " The School Teacher ";
		ability = " Calculate ";
		damage = 20;
		coolDown = 4;
		break;
	case 3:
		//The Bandit
		survivor = " The Bandit ";
		ability = " pow pow! ";
		damage = 60;
		coolDown = 4;
		break;
	default:
		//The Nobody
		survivor = " The Nobody ";
		ability = " Head bash ";
		damage = 10;
		coolDown = 2;
		break;
	}

	cout << endl << " ----------Survival----------- " << endl;
	cout << survivor;
	cout << "You are one of the only survivors of the C13 bomb. You need to survive! You are tasked with living,\nif not for yourself then for the ones who couldnt make it!" << endl;
	cout << "Your ability is to " << ability << "be aware of how you use this, life is truely sacred!" << endl;

	attack = damage * 10 / coolDown;

	cout << "You are ambushed while trying to get supplies! Does" << survivor << "really have what it takes?" << endl;
	cout << survivor << "uses" << ability << endl;
	cout << survivor << "your attack is " << attack << endl;
	
	//check if u win
	if (attack > 300)
	{
		cout << endl << " Success you are truly built to survive! " << endl;
	}
	else
	{
		cout << survivor << "didnt have what it takes!";
	}
    return 0;
}


