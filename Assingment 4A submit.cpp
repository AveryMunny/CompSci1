// Assignment 4A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 1 A
Author.Avery Nybb
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: compute future bank balances
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ios;

int yearsNeeded(double initialBalance, double interestRate, double goal);
double newBalance(double initialBalance, double interestRate);
double newBalance(double initialBalance, double interestRate, int n);

bool validateFloatInput(float, string);



int main()
{


    cout.precision(2);
    cout.setf(std::ios::fixed, std::ios::floatfield);

    //defining variables 
    double initial;
    double interest;
    double one = 0;
    double ten = 0;
    double oneMil;
    string msg = ("That was invalid, try again.\n");
    string msg2 = ("Invalid, again please\n");

    bool loopFlag = true;


    //testing function calls
    do
    {
        cout << "Enter your initial deposit please\n";
        cin >> initial;

        loopFlag = validateFloatInput(initial, msg);
    } while (loopFlag);


    do
    {
        cout << "Enter the interest rate please\n";
        cin >> interest;

        loopFlag = validateFloatInput(interest, msg2);
    } while (loopFlag);


    one = newBalance(initial, interest);
    cout << "The balance in your account after one year is " << one << "\n";
    ten = newBalance(initial, interest, 10);
    cout << "The balance after ten years would be " << ten << "\n";
    oneMil = yearsNeeded(initial, interest, 1000000);
    cout << "It would take you " << oneMil << " years to make one million dollars\n";



}








//functions 

// This first version of the new balance function computes the
// final account balance that will be reached by starting with
// an initial balance and adding one year's interest at a given
// interest rate (such as 0.05 for 5%). The function works
// correctly for any non-negative arguments.
double newBalance(double initialBalance, double interestRate)
{
    double finalBalance;
    interestRate++;
    finalBalance = (initialBalance * interestRate) + initialBalance;
    return finalBalance;
}


// This second version of the new balance function computes the
    // final account balance that will be reached by starting with
    // an initial balance and adding some n number of years of interest
    // at a given interest rate (such as 0.05 for 5%). The interest is added
    // once per year and it is applied to the entire balance.
    // For example, new_balance(100.00, 0.10, 2) is 121.00 since
    // the first year received 10.00 interest (10% of 100) and the
    // second year received 11.00 interest (10% of the 110, which
    // was the second year's starting balance). The function works
    // correctly for any non-negative arguments.
    // Notice n is not an appropriate variable name, but will not be
    // deducted for this program.
double newBalance(double initialBalance, double interestRate, int n)
{
    double finalBalance;
    interestRate++;
    finalBalance = (initialBalance * pow(interestRate, n));
    return finalBalance;
}

// The years needed function computes the number of years needed for
// a given starting balance to reach a given goal at a certain rate
// of compound interest. The function works correctly for any
// positive arguments
int yearsNeeded(double initialBalance, double interestRate, double goal)
{
    double years;
    double temp;
    interestRate++;
    temp = goal / initialBalance;
    years = (log(temp)) / log(interestRate);
    return years + .9;
}

// Validate Input takes integer data and ensures it is correct.
// Note: it is asking is the data invalid? so true/false is in that vein
// precondtion: pass the function the user choice
//              pass the function a range, range1 lowest acceptable
//              pass the function a range, range2 highest acceptable
//              pass the message to display for any user error
// postcondition: returns false if valid and true if not
bool validateFloatInput(float userChoice, string message)
{
    bool goodOrNot = false;
    if ((cin.fail()))
    {
        std::cout << message << std::endl;
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




