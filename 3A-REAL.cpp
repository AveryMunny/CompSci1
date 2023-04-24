/*
COPYRIGHT (C) 2017 Avery Munn (4796397 ) All rights reserved.
CSI assignment 3A
Author. Avery MUnn
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose: Making a rectangle out of user input :)
*/

#include <iostream>

int main()
{
	using namespace std;
	//declaring varibales 
	int length;
	int width;
	int j = 0;
	int k = 0;

	//getting the information
	cout << "Please give me the length of your rectangle! \n";
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), ’\n’);
		cout << "That was invalid, please try again\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), ’\n’);
		cout << "Please give me the length of your rectangle! \n";
		cin >> length;
		cout << "Great! Now give me the width.\n";
		cin >> width;
	}
	cin >> length;
	cout << "Great! Now give me the width.\n";
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), ’\n’);
		cout << "That was invalid, please try again\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), ’\n’);
		cout << "Please give me the length of your rectangle! \n";
		cin >> length;
		cout << "Great! Now give me the width.\n";
		cin >> width;
	}
	cin >> width;
	while (length > 75 || width > 75 || (cin.fail()))
	{
		cout << "That was invalid, please try again\n";
		cin.clear();
		cout << "Please give me the length of your rectangle! \n";
		cin >> length;
		cout << "Great! Now give me the width.\n";
		cin >> width;
	}


	//printing the rectangle
	while (k < length)
	{
		while (j < width)
		{
			cout << "x";
			j++;
		}
		cout << "\n";
		k++;
		j = 0;
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
