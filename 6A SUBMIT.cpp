// 6A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 1 A
Author.Avery Munn
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: Read out data from a file
*/


#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::ifstream;

int main()
{
    std::cout << "TESTING\n";
    //varibles 
    ifstream inputFile;
    std::string fileName;

    //asking the user for the name of the file
    cout << "Hello! could you please give me the name of the file you want to open?\n";

    //going through the data and checking to make sure it's a valid file
    do
    {
        cin >> fileName;
        inputFile.open(fileName);
        if (inputFile.fail())
        {
            cout << "Invlaid\n";
        }
    } while (inputFile.fail());

    //trying to display data 
    for (int i = 1; i < 25; i++)
    {
        std::string farmName, plant;
        int amount;
        double price;
        std::getline(inputFile, farmName, ',');
        inputFile >> amount;
        inputFile >> plant;
        inputFile >> price;
        inputFile.ignore();
        cout << i << ": " << farmName << "\n";
        i++;
        cout << i << ": " << amount << "\n";
        i++;
        cout << i << ": " << plant << "\n";
        i++;
        cout << i << ": " << price << "\n";
    }
    cout << "Press any character please lovely \n";
    char work;
    cin >> work;
    int count = 1;
    while (!inputFile.eof())
    {
        std::string farmName, plant;
        int amount;
        double price;
        std::getline(inputFile, farmName, ',');
        if (inputFile.eof())
        {
            return 0;
        }
        inputFile >> amount;
        inputFile >> plant;
        inputFile >> price;
        inputFile.ignore();
        cout << count << ": " << farmName << "\n";
        count++;
        cout << count << ": " << amount << "\n";
        count++;
        cout << count << ": " << plant << "\n";
        count++;
        cout << count << ": " << price << "\n";
    }
}

