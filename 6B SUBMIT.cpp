// 6A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 6B
Author.Avery Munn
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: Read out data from a file
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>

//using all these 
using std::cout;
using std::cin;
using std::setfill;
using std::setw;
using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
    //varibles 
    ifstream inputFile;
    ofstream outputFile;
    std::string fileName;
    double itemTotal, grandTotal;

    //asking the user for the name of the file
    cout << "Hello! could you please give me the name of the file you want to open?\n";
    cin >> fileName;

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

    //getting the formatting correct 
    cout << std::setw(62) << std::setfill('=') << std::endl; //upper portion
    outputFile << std::setw(62) << std::setfill('=') << std::endl; //same thing but with the output file 
    cout << "=" << std::setw(18) << std::setfill(' ') << "FARMER'S MARKET INVENTORY" << std::setw(18) << std::setfill(' ') << "= \n"; //title
    outputFile << "=" << std::setw(18) << std::setfill(' ') << "FARMER'S MARKET INVENTORY" << std::setw(18) << std::setfill(' ') << "= \n"; // output file title 
    cout << std::setw(62) << std::setfill('=') << std::endl; // lower portion
    outputFile << std::setw(62) << std::setfill('=') << std::endl; // outputFile lower portion

    //opening the file
    inputFile.open(fileName);
    int count = 1;
    //trying to display data 
    do
    {
        std::string farmName, plant;
        int amount, total;
        double price;
        std::getline(inputFile, farmName, ',');
        inputFile >> amount;
        inputFile >> plant;
        inputFile >> price;
        inputFile >> total;

        //calculating totals
        itemTotal += amount;
        grandTotal += amount * price;

        outputFile << setw(25) << std::left << farmName + ":" << amount << " " << plant << " "
            << "@ " << std::fixed << std::setprecision(2) << price
            << " each totalling $" << amount * price << endl;
        cout << setw(25) << std::left << farmName + ":" << amount << " " << plant << " "
            << "@ " << std::fixed << std::setprecision(2) << price
            << " each totalling $" << amount * price << endl;
        inputFile.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
    } while (!inputFile.eof());

    //final line
    cout << endl << setw(25) << std::left << "Grand total:" << itemTotal << " items totaling $"
        << std::setprecision(2) << std::fixed << grandTotal << endl;

}

