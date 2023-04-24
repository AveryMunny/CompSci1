// Program id: CSLab05.cpp
// This is our template for CS Lab 05
// REFACTORING PRACTICE PROGRAM
// This program is used for the University of Akron, Department of Computer Science Laboratories
// Goal: refactor main into functions
// examine each portion in main and analyze the code for refactoring
// Next build your function prototype
// Next build your function by copying and pasting the code from main, into your function
// repeat until complete

#include<iostream>
#include <iomanip>

using namespace std; // forgive me for being lazy!

const double TAX_RATE = .05;

//prototypes
double getPrice();
int amountPurchased();
double wholesalePurcahse(double, int);
double RetailPurchase(double, int);
char getSaleType();
double getTotal(double, int, double, char);

//variables 
char saleType;
int number = 0;
double subTotal = 0;
double total, price;

int main()
{
    price = getPrice();
    number = amountPurchased();
    saleType = getSaleType();
    getTotal(price, number, total, saleType);

   
}

//functions 

//gets the price of something from the user input
//pre: needs an input
//post: returns the price
double getPrice()
{
    double price;
    cout << "Enter the price please\n";
    cin >> price;
    return price;
}

//reurns the total of retail price
//pre: need the cost and amount bought
//post: returns retail cost
double RetailPurchase(double cost, int num)
{
    subTotal = price * number;
    total = subTotal + subTotal * TAX_RATE;   
    return total;
}

//returns the total of wholesale purchase
//pre: needs amount and cost
//post: returns wholesale price
double wholesalePurcahse(double cost, int num)
{
    double end;
    end = cost * num;
    return end;
}

//returns how many were bought
//pre: needs an input
//post: returns how many were purchased
int amountPurchased()
{
    int number;
    cout << "Enter number purchased: ";
    cin >> number;
    return number;
}

//returns the sale type
//pre: needs an item
//post: returns the type
char getSaleType()
{
    cout << "Type W if this is wholesale purchase. \n"
        << "Type R if this is retail purchase. \n"
        << "then press return... \n";
    cin.ignore();
    cin.get(saleType);
    if ((saleType == 'W') || (saleType == 'w'))
    {
        total = wholesalePurcahse(price, number);
    }
    else if ((saleType == 'R') || (saleType == 'r'))
    {
        total = RetailPurchase(price, number);
    }
    else
    {
        cout << "Error in the input...";
    }
    return saleType;
}

//returning the total
//pre: needs the price, number sold, total, and type
//post: returns the total
double getTotal(double cost, int amount, double bill, char type)
{
    cout << setprecision(2) << fixed << showpoint << amount << " items at $" << cost << endl;
    cout << "Total bill $" << bill;
    if ((type == 'R') || (type == 'r'))
    {
        cout << " includes sales tax.\n";
    }
    //ask about this 
    return 0;
}