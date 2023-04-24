/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 1 A
Author.Avery Nybb
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose:
*/



#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::string;

//prototype
bool isPrime(int);
bool validateInput(int, string);
bool loopFlag;
bool validateInputAgain(int x, string msg);



//defining variables
string msg = ("That was not a valid input, please try again\n");
int num;
bool answer;
bool check = true;
bool goAgain = true;
int a;



int main()
{
    while (goAgain) //playing again
    {
        do
        {
            cout << "Hello there! PLease input the number you want to check if it's prime or not.\n";
            cin >> num;
            loopFlag = validateInput(num, msg); //validating input

        } while (loopFlag);

        answer = isPrime(num); //prime verses not prime
        if (answer == true)
        {
            cout << "That is a prime number that's so exciting!!\n";
        }
        else
        {
            cout << "Unfortunately that isn't a prime number, I'm sorry to inform you :((\n";
        }
        //asking to play again
        do //playing again question
        {
            cout << "Would you like to play again? 1 for yes 2 for no.\n";
            cin >> a;
            loopFlag = validateInputAgain(a, msg);
        } while (loopFlag);

      if (a == 2)
        {
         goAgain = false;
        }
    }

}

//making the function deciding whether or not it's a prime number
//pre: needs a number inputed
//post: returns if it's prime or not
bool isPrime(int x)
{
    int i = 2;

    while (i < (x/2) +1)
    {
        if (x % i == 0)
        {
            check = false;
        }
        i++;
    }
    if (check)
        return true;
    else
        return false;

}

//pre: needs an input and a message to come out
//post: returns if whether or not the input was valid
bool validateInput(int x, string msg)
 {
        bool goodOrNot = false;
        if ((cin.fail()))
        {
            std::cout << msg << std::endl;
            goodOrNot = true;
        }
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return goodOrNot;
}

//validation for going again
//pre: same as above I don't really need the second function
//post: same as above, to be honest I shouldn't have this fucntion but it's 11 and I'm so tried and it works but next time I'll just keep the same one throughout
bool validateInputAgain(int x, string msg)
{
    bool goodOrNot = false;
    if ((cin.fail()) || (x != 1 && x != 2))
    {
        std::cout << msg << std::endl;
        goodOrNot = true;
    }
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return goodOrNot;
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
