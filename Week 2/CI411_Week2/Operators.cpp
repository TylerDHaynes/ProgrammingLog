#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    cout << "=== Options menu ===" << endl << endl;
    cout << " Please select the program: " << endl;
    cout << " 1 : Arithmetic operators " << endl;
    cout << " 2 : Circle Time " << endl;
    cout << " 3 : Missile Attack " << endl;
    cout << " 4 : End Program " << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        // Arithmetic Operators
        cout << "    Arithemetic operators" << endl;
        cout << "---------------------------------" << endl << endl;

        cout << "5 + 5 = " << 5 + 5 << endl;
        cout << "5 - 5 = " << 5 - 5 << endl;
        cout << "5 * 5 = " << 5 * 5 << endl;

        cout << "7 / 3 = " << 7 / 3 << endl;
        cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;
        cout << "7 % 3 = " << 7 % 3 << endl;

        cout << "5 + 5 * 3 = " << 5 + 5 * 3 << endl;
        cout << "(5 + 5) * 3 = " << (5 + 5) * 3 << endl;
    }
    if (option == 2)
    {
        //Circle Calculations
        cout << endl << endl << " Circle Time " << endl;
        cout << "---------------------------------" << endl << endl;

        //Variables
        const float PI = 3.142;
        float radius;

        cout << "Please enter a value for a radius: ";
        cin >> radius;

        cout << "Diameter = " << 2 * radius << endl;
        cout << "Circumferance = " << 2 * PI * radius << endl;
        cout << "Area = " << PI * pow(radius, 2) << endl;

        cout << endl << endl << " Circle Time is Over " << endl;
        cout << "---------------------------------" << endl << endl;
    }
    if (option == 3)
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
    if (option == 4)
    {
        return 0;
    }



    




    //Extra Activity
    
    //Potion seller

    cout << endl << "Welcome to the SpaceRock, we are a multi-universal conglomerate " << endl;
    cout << endl << "Type mine to gain money, type shop to buy upgrades :  " << endl;
    float Money = 0;
    string mine;





    //https://www.geeksforgeeks.org/power-function-cc/#:~:text=pow()%20is%20function%20to,%5E2%2C%20which%20is%2016.
    


    

}