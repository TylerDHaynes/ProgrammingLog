// CI411_Week4
//

#include <iostream>
using namespace std;


int main()
{

	//Task 1
	cout << " Task 1: Part 1" << endl;

	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 100; j += 5)
		{
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
	//Task 1 part 2
	
	
	
	//Task 2
	cout << " Task 2/Task 1: Part 2 " << endl;
	bool gameOver = false;
	int timesTable;
	while (gameOver == false)
	{
		cout << endl << " Please enter an integer: " << endl;
		cin >> timesTable;

		for (int i = 1; i <= 12; ++i)
		{
			cout << timesTable << " * " << i << " = " << timesTable * i << endl;
		}

		cout << endl << "Do you want to play again? " << endl;
		char playAgain;
		cin >> playAgain;

		if (playAgain == 'n' || playAgain == 'N')
		{
			gameOver = true;
		}
	
	}

	cout << " Task 3 " << endl;
	cout << "------------------------------------------------ " << endl;
	cout << "--------------Welcome To The Game--------------- " << endl;
	cout << "------------------------------------------------ " << endl;
	// This creates a random number using the runtime clock
	srand(static_cast<unsigned int>(time(0)));
	// This is the game variables 
	bool gameEnd = false;
	int npcHP = 100, pcHP = 100, pcAttack = 10, npcAttack = 10, pcModifier, npcModifier, playerOption;

	while (gameEnd == false)
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
			gameEnd = true;
	}

	cout << "\n\n==============================================================\n\n ";
	if (pcHP <=0)
	{
		cout << "\n You Lost";
	}
	else
	{
		cout << "\n You Won";
	}
	return 0;

}


//   Create a simple C++ program, using for loops, in the int main() function that: Counts Up from 1 to 20 Counts Down from 100 to 0 in steps of 5
//
