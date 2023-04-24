// Assingment 2A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Avery Munn, calculating grades 

#include <iostream>
#include <string>
int main()
{
   
    using namespace std;
    //defining variables 
    double score;
    int numOfInputs;
    double count = 0;
    double total;
    double endGrade;
    double possible;
    double totPossible;
    double exercise;
    double totExercise;
    string whatClass;
    
    //seeing how many times I need to run the program
    cout << "How many exercises should I input?";
    cin >> numOfInputs;

    //getting information
    while (count < numOfInputs)
    {
        cout << "Please input the score that you got on an exercise " << count+1<< ": \n";
        cin >> score;
        cout << "Please input the total points for the exercise " << count + 1 << ": \n";
        cin >> total;
        totExercise += score;
        totPossible += total;
        count++;
    }
    //Seeing the total number of points to possible points 
    totExercise += score;
    totPossible += total;

    

    //calculations
    endGrade = totExercise / totPossible;
    if (endGrade >= .93)
    {
        cout << "Congrats you got an A!";
    }
    else if (endGrade >= .90)
    {
        cout << "Nice job you got an A-";

    }
    else if (endGrade >= .87)
    {
        cout << "Woo you got a B+";
    }
    else if (endGrade >= .83)
    {
        cout << "Nice you got a B";
    }
    else if (endGrade >= .80)
    {
        cout << "You got a B-";
    }
    else if (endGrade >= .77)
    {
        cout << "You got a C+";
    }
    else if (endGrade >= .73)
    {
        cout << "You got a C";
    }
    else if (endGrade >= .70)
    {
        cout << "You got a C-";
    }
    else if (endGrade >= .67)
    {
        cout << "You got a D+";
    }
    else if (endGrade >= .63)
    {
        cout << "You got a D";
    }
    else if (endGrade >= .60)
    {
        cout << "You got a D-";
    }
    else
    {
        cout << "You failed and got an F :(";
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
