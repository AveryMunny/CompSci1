// 5B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 1 A
Author.Avery Nybb
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: Who's the best dodgeball player?
*/



#include <iostream>
#include <cstdlib>


using std::cout;
using std::cin;
using std::string;

//prototype
void shoot(bool& targetAlive, double accuracy);
int startDuel();

// Constants
const float AARONACCURACY = (1.0 / 3) * 100;
const float BOBACCURRACY = (0.5) * 100;
const float CHARLIEACCURACY = (1.0) * 100;
const int NUMDUELS = 1000;

//variables 
double charlieWin = 0;
double bobWin = 0;
double aaronWin = 0;

int main()
{
    srand(time(0));
    for (int i = 0; i < NUMDUELS; i++)
    {
        int win = startDuel();
        if (win == 1)
        {
            aaronWin++;
        }
        else if (win == 2)
        {
            bobWin++;
        }
        else if (win == 3)
        {
            charlieWin++;
        }



    }
    //making them percentages
    aaronWin *= 100;
    bobWin *= 100;
    charlieWin *= 100;

    std::cout << "Using the strategy of shooting at the best shooter alive, " << std::endl;
    std::cout << "but Aaron intentionally misses on the first shot:" << std::endl;
    std::cout << "Aaron win %: " << (aaronWin / NUMDUELS) << std::endl;
    std::cout << "Bob win %: " << (bobWin / NUMDUELS) << std::endl;
    std::cout << "Charlie win %: " << (charlieWin / NUMDUELS) << std::endl;
}

//functions 

//taking a shot at each other
void shoot(bool& targetAlive, double accuracy)
{
    double num = 0;

    //generating a random number between 0 and 1  
    num = (rand() % 100);
    if (accuracy > num)
    {
        targetAlive = false;
    }

}

//starting the fight
int startDuel()
{
    bool aaronAlive = true, bobAlive = true, charlieAlive = true, flag = true;
    while (true)
    {
        if (!flag)// missed the first shot
        {
            if (aaronAlive)//checking to see if he's alive
            {
                if (charlieAlive) //taking the shots
                {
                    shoot(charlieAlive, AARONACCURACY);
                }
                else if (bobAlive) //seeing if bob is alive 
                {
                    shoot(bobAlive, AARONACCURACY);
                }

            }
        }
        else flag = false;
        //bob attacking
        if (bobAlive)
        {
            if (charlieAlive) //shooting at Charlie
                shoot(charlieAlive, BOBACCURRACY);
            else if (aaronAlive) //shooting at aaron
                shoot(aaronAlive, BOBACCURRACY);
        }
        //charlie attacking
        if (charlieAlive)
        {
            if (bobAlive) //shooting at bob
                shoot(bobAlive, CHARLIEACCURACY);
            else if (aaronAlive) //shooting at aaron
                shoot(aaronAlive, CHARLIEACCURACY);
        }
        //getting out of the loop by returning who won
        if (aaronAlive && !bobAlive && !charlieAlive)
            return 1;
        else if (!aaronAlive && bobAlive && !charlieAlive)
            return 2;
        else if (!aaronAlive && !bobAlive && charlieAlive)
            return 3;
    }
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
