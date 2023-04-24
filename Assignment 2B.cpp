// Assignment 2B.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Avery Munn, adding up whole numbers 

#include <iostream>

int main()
{
    //Getting ready to code
    using namespace std;
    
    //Declaring variables
    int num[10];
    int pos[10] = {0,0,0,0,0,0,0,0,0,0};
    int neg[10] = {0,0,0,0,0,0,0,0,0,0};
    int posTotal= 0;
    int negTotal= 0;
    int total = 0;

    //Getting the numbers
    cout << "Plase give me 10 whole numbers, some positive and some negative or whatever you're feeling. \nHit enter after each one :)\n";
   
    for (int i = 0; i < 10;i++)
    {
        cin >> num[i];
        //cout << num[i]<<"\n";
    }
    for (int i = 0; i < 10;i++)
    {
        if (num[i] >= 0)
        {
             
            pos[i] = num[i];
           // cout << pos[i];
        }
        else
        {
            neg[i] = num[i];
           // cout << neg[i];
        }
    }
    for (int i = 0; i < 10;i++)
    {
        posTotal += pos[i];
    }
    for (int i = 0; i < 10;i++)
    {
        negTotal += neg[i];
    }
    for (int i = 0; i < 10;i++)
    {
        total += num[i];
    }

    //outputting results
    cout << "The sum of all positive inputs is " << posTotal<< "\n";
    cout << "The sum of all negative inputs is " << negTotal<<"\n";
    cout << "The sum of all  inputs is " << total;
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
