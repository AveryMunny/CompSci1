/*
COPYRIGHT(C) 2017 Student Name(4796397) All rights reserved.
CSI assignment 1 A
Author.Avery Munn
zippy@zips.uakron.edu
Version. 1.01 07.09.2017
Purpose:
*/
/*
ACADEMIC INTEGRITY PLEDGE
- I have not used source code obtained from another
student nor any other unauthorized source, either
modified or unmodified.
- All source code and documentation used in my program
is either my original work or was derived by me from
the source code published in the textbook for this
course or presented in class.
- I have not discussed coding details about this project
with anyone other than my instructor. I understand
that I may discuss the concepts of this program with
other students and that another student may help me
debug my program so long as neither of us writes
anything during the discussion or modifies any
computer file during the discussion.
- I have violated neither the spirit nor letter of these
restrictions.
Signed:______________________________ Date:_____________
COPYRIGHT (C) 2016 (Avery Munn). All Rights Reserved.
(Simulating the return to seven days, using a coin flip)
author (Avery Munn)
version 1.01 (10/24)
*/

//all of the directives I needed 
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>

//using 
using std::cout;
using std::cin;
using std::string;

//function declaration for the validation 
bool validateInput(char x, string msg);

int main()
{
	//declaring variables 
	char guess; //used for the users guess 
	int userScore = 0, compScore = 0, coin; //scores and the coin flip as 1 or 0
	bool loopFlag; //used for validation
	string calcGuess, coinWord; //changing the char and int into strings to make it easier to compare and print out

	//opening statement
	cout << std::setw(25) << "LET THE \n";
	cout << "\n";
	cout << "FLIP OF THE COIN REWRITE HISTORY\n";
	cout << "\n";
	cout << "\n";
	cout << std::setw(25) << "/ ----------------------\\\n";
	cout << std::setw(25) << "| RETURN TO SEVEN DAYS |\n";
	cout << std::setw(25) << "\\---------------------- /\n";
	cout << "\n";
	cout << "It is July 1, 1862, the final day\n";
	cout << "of the Battle of Seven Days...\n";
	cout << "\n";
	cout << "\n";
	cout << "In this re - enactment of the second day\n";
	cout << "of battle, you are George B.McClellan\n";
	cout << "in charge of the Unionists\n";
	cout << "\n";
	cout << "\n";
	cout << "We will flip a coin to determine the\n";
	cout << "outcome of the small battles for\n";
	cout << "territories within the Seven Days area\n";
	cout << "\n";
	cout << "\n";
	cout << "You have to predict whether the coin\n";
	cout << "will come up heads or tails...\n";
	cout << "\n";

	//making the for loop of 1-9 to go trough 9 rounds
	for (int i = 1; i < 10; i++)
	{
		//showing what battle we're on using a switch statement (the defualt should never occur)
		switch (i)
		{
		case 1: //battle one
			cout << "Battle " << i << "- Little Round Top\n";
			break;
		case 2: //battle 2
			cout << "Battle " << i << "- Cemetry Ridge\n";
			break;
		case 3: //battle 3
			cout << "Battle " << i << "- Devil's Den\n";
			break;
		case 4: //battle 4
			cout << "Battle " << i << "- The Wheatfield\n";
			break;
		case 5: //battle 5
			cout << "Battle " << i << "- The Peach Orchard\n";
			break;
		case 6: //battle 6
			cout << "Battle " << i << "- Culps Hill\n";
			break;
		case 7: //battle 7
			cout << "Battle " << i << "- Zieglers Grove\n";
			break;
		case 8: //battle 8
			cout << "Battle " << i << "- Seminary Ridge\n";
			break;
		case 9: //battle 9
			cout << "Battle " << i << "- Gettysburg";
			break;
		default: //default should never occur
			cout << "The loop should never get here, something is wrong\n";
			break;
		}
			

		//prompting for input for heads or tails
		cout << "Now General McClellan\n";
		do //this is starting to test for validation
		{
			cout << "Do you predict the coin will come out\n";
			cout << "heads(H) or tails(T) ? \n";
			cin >> guess;
			loopFlag = validateInput(guess, "Invalid input, please try again\n"); //calling the function
		} while (loopFlag);

		//changing guess to a string instead of char
		if (guess == 'T' || guess == 't')
		{
			calcGuess = "tails";
		}
		else
		{
			calcGuess = "heads";
		}

		//if input correct, code continues and tells them what they guessed
		cout << "You have chosen " << calcGuess << std :: endl;
		cout << "Stand by to fight, General\n";
		cout << "McClellan...\n";

		//flipping the coin using a random number generator  
		srand((int)time(NULL));
		coin = (rand() % 2);
		cout << "The result of the coin flip was " << coin << std :: endl;

		//making the coin a heads or tails not t or h
		if (coin == 0)
		{
			coinWord = "heads";
		}
		else
		{
			coinWord = "tails";
		}

		//seeing who won the battle
		if (coinWord == calcGuess) //testing to see if user won 
		{
			userScore++;
			cout << "Well done, General\n"
				<< "McClellan...\n"
				<< "You have defeated Lee\n";
		}
		else //comp wins
		{
			compScore++;
			cout << "I am sorry, General\n"
				<< "McClellan...\n"
				<< "but the battle goes to Lee\n";
		}


		//prinitng out the scores
		cout << "So far: McClellan " << userScore << " victories, \n";
		cout << "Lee " << compScore << std :: endl;

	} //end of the for loop here 

	//printing out the winner of the battle
	if (userScore > compScore) //user wins
	{
		cout << "The results show that\n"
			 << "George B.McClellan won the\n"
			 << "majority of the battles\n"
			 << "and is thus declared the victor\n"
			 << "on July 2 1863.\n";
	}
	else //comp wins
	{
		cout << "The results show that\n"
			 << "Robert E Lee won the\n"
			 << "majority of the battles\n"
			 << "and is thus declared the victor\n"
			 << "on July 2 1863.\n";
	}

	//ending statements
	cout << "In the actual Battle at Seven Days,\n";
	cout << "the Northern troops turned back Lee's\n";
	cout << "final assaults at Malvern Hill(July\n";
	cout << "1)....\n";
	cout << "\n";
	cout << "\n";
	cout << "The Confederates lost about 16, 000\n";
	cout << "men...\n";
	cout << "\n";
	cout << "\n";
	cout << "The Unionists lost about 20, 000 men ...\n";
	cout << "\n";
	cout << "McClellan's failure to capture\n";
	cout << "Richmond, and the subsequent\n";
	cout << "withdrawal of the Union's Army from\n";
	cout << "the Yorktown Peninsula, signified the\n";
	cout << "end of the Peninsular Campaign.\n";

}

//precondition:: gets user intput and attemps to validate
//post: checks whether input is valid or not
bool validateInput(char x, string msg)
{
	bool goodOrNot = false;
	if (x != 'H' && x != 'h' && x != 'T' && x != 't')
	{
		std::cout << msg << std::endl;
		goodOrNot = true;
	}
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return goodOrNot;
}