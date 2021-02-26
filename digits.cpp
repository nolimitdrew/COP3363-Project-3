/* Name: Andrew Stade
Date: 2/15/2019
Section: 0004
Assignment: Homework #3 Part II (Practice with Loops & Functions)
Due Date: 2/15/2019
About this project: This assignment will consist of writing different small programs -- one that involve practice utilizing loops and the second of which utilizes loops and the writing and calling of a function. The digits assignment will be the only one that will require the use of a function.
Assumptions: The user will input only postive integers or zero.

All work below was performed by Andrew Stade */

#include <iostream>
#include <iomanip>
using namespace std;

//PreProcessor Directives (includes and using statements)
//Function DECLARATIONs

int AddDigits (int val);

int main()
{

	int val = 0; int num = 0; int sum = 0;
	
	cout << "Please enter an integer (0 to quit): ";
	cin >> val;	// This variable is tied to a user input
	num = val;	// The num variable is used in the functions below

	if (val == 0)	// The end msg if 0 is entered initially
	{
		cout << "Goodbye" << endl;
	}
        
	while (val != 0)	// The main loop for the program   
        {       
		cout << "The sum of the digits of " << val << " is " 
		<< AddDigits(val) << endl;
		AddDigits(val);
		cout << "Please enter an integer (0 to quit): ";
		cin >> val;
		
		if (AddDigits(val) == 0)  // Default end message 	
		{
			cout << "Goodbye" << endl;
		}
	}
	cout << endl;
	
	return 0;
}

//Function DEFINITION for AddDigits goes here
//Your main() code that will call AddDigits inside of a loop

int AddDigits(int val)	// The AddDigits function for outputing the values
{


	int sum = 0;
	
	while (val != 0)
	{
		sum = sum +val % 10;	/* In order to display the sum, the 
					function must be modded by 10.*/
					
		val = val / 10;
	}
	if (sum < 0)
	{
		sum = sum * -1;		/* The negatives must be multiplied
					by -1 inorder to output negative
					values. */
	
		return sum;
	}
	else
	{
		return sum;
	}
	
	return 0;
}

