// =======================================================// Arrays // Tyler Haynes th800 UoBGames, 16/11/2022// =======================================================
// Libraries to include
#include <iostream>
using namespace std;

// =======================================================
// Function Declaration
void startScreen();
void exitScreen();
void createBoard();
void displayBoard();
void waitForKeyPress();
void populateBoard();
void playAgain();
void displayDaysOfWeek();
void displayPlayArea();

// =======================================================
// Global Variables
bool gameOver = false;
const int boardWidth = 16;
const int boardHeight = 16;
char gameBoard[boardHeight][boardWidth];

// =======================================================


int main()
{
    

    createBoard();

    while (!gameOver) //Game Loop
    {
        displayBoard();

        startScreen();

        waitForKeyPress();

        populateBoard();

        displayBoard();

        waitForKeyPress();

        /*displayPlayArea();*/

        playAgain();
    }
    // Setup
    // main functions / loop
    // Task 1/2 Functons
    displayDaysOfWeek();
    displayPlayArea();

    exitScreen();

    return 0;
}

// =======================================================
// Functions
// =======================================================

void startScreen()
{
    cout << "\n========================================= \n";
    cout << "====== Game Board \n";
    cout << "====== Tyler Haynes, 16/11/2022 \n";
    cout << "========================================= \n\n";
    cout << "====== Welcome Player 1 ======\n";
}

void exitScreen()
{
    cout << "\n\n\n";
    cout << "========================================= \n";
    cout << "======== Thank You for Playing ========== \n";
    cout << "============== Good Bye ================= \n";
    cout << "========================================= \n\n\n";
}
void createBoard()
{
    for (int row = 0; row < boardHeight; row++)
    {
        for (int col = 0; col < boardWidth; col++)
        {
            // set symbols for top and bottom
            if (row == 0 || row == boardHeight - 1)
            {
                gameBoard[row][col] = '=';
            }
            else
            {
                if (col == 0 || col == boardWidth - 1) // left and right edges
                {
                    gameBoard[row][col] = 'I';
                }
                else
                {
                    gameBoard[row][col] = '-';
                }
            }
        }
    }
}
void displayBoard()
{
    system("cls");
    printf("\n --------- Game Board -----------");
    cout << "GameOver:  " << gameOver;

    cout << "\n";
    for (int row = 0; row < boardHeight; row++)
    {
        for (int col = 0; col < boardWidth; col++)
        {
            cout << "  " << gameBoard[row][col];
        }
        cout << "\n";
    }
}

void populateBoard()
{
    cout << " \n Populate Board";
    cout << "\n How many objects would you like to add? ";

    int objectSpawnAmount = 0;

    if (cin >> objectSpawnAmount)
    {
        for (int i = 0; i < objectSpawnAmount; i++)
        {
            //random numbers avoiding edges
            int row = (rand() % (boardHeight - 2) + 1);
            int col = (rand() % (boardWidth - 2)) + 1;

            gameBoard[row][col] = '*';
        }
    }

    cin.clear();
    cin.ignore(100, '\n');
}
void waitForKeyPress()
{
    cout << "\n\n Press C to continue:  ";
    int waitForPress;
    cin >> waitForPress;
    cin.clear();
    cin.ignore(100, '\n');

}
void playAgain()
{
    cout << "Would you like to play again? (y/n)";
    char option;
    cin >> option;
    if (option == 'y')
    {
        gameOver = false;
    }
    else if (option == 'n')
    {
        gameOver = true;
    }
    else
    {
        gameOver = false;
    }
}


void displayDaysOfWeek()
{
    //task 1
    // array start========0==========1===========2============3=========4===========5==========6=====
    string days[7] = { "Monday", "Tuesday", "Wesnesday", "Thursday", "Friday", "Saturday", "Sunday" };

    for (int i = 0; i < 7; i++)
    {
        cout << " \n Day " << i + 1 << ": " << days[i];
    }
}

void displayPlayArea()
{
    cout << "\n\n Welcome to my Game Board \n\n ";

    char board[8][8] = { {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'},
                        {'.','.','.','.','.','.','.','.'} };

    //Display board
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            cout << board[row][col];
            cout << "  ";
        }
        cout << "\n ";
    }
    //populating the game board



}

// =====================================================

