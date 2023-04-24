/*
COPYRIGHT (C) 2017 Avery Munn (4796397 ) All rights reserved.
CSI assignment 1 A
Author. Avery Munn
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: Madlibs!! 
*/

#include <iostream>

int main()
{
    using namespace std;

    //defining variables 
    string name;
    string noun;
    int number;
    string bodyPart;
    string verb;

    //getting the information from the user
    cout << "Give me a proper first name (ex: Jacob, Harry, Sophia, Amelia)\n";
    cin >> name;
    cout << "Now a plural noun (ex: cow, sheep, gold, CDs)\n";
    cin >> noun;
    cout << "Some arbitrary integer (ex: 1,2,3,314)\n";
    cin >> number;
    cout << "Part of the anatomy (ex:head, shoulder, arm, leg)\n";
    cin >> bodyPart;
    cout << "A verb (ex: run, jump, skip, dance) \n";
    cin >> verb;

    //Telling the story
    cout << "The famous explorer "
        << name << " had nearly given up a life - long quest to find the Lost City of " 
        << noun << " when one day the " 
        << noun << " found the explorer. Surrounded by " 
        << number << " " 
        << noun << ", a tear came to "
        << name << "’s "
        << bodyPart << ". After all this time, the quest was finally over. And then, the "
        << noun << " promptly devoured "
        << name << ". The moral of the story ? Be careful what you "
        << verb << " for.\n";
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
