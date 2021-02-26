/* Name: Andrew Stade
Date: 2/12/2019
Section: 0004
Assignment: Homework #3 Part I (Practice with Loops & Functions)
Due Date: 2/15/2019
About this project: This assignment will consist of writing different small programs -- one that involve practice utilizing loops and the second of which utilizes loops and the writing and calling of a function. The digits assignment will be the only one that will require the use of a function.
Assumptions: The user will input only postive integers or zero.

All work below was performed by Andrew Stade */

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	int pos = 0; int neg = 0; double total = 0; int input = 1; 
	int sum = 0; double avg = 0;

	/* All of the above integers are stated as values of 0, except
	for the input which must remain at 1 in order to run the loop below */

	while (input != 0)
	{
		cout << "Enter any integer value, or 0 to quit: ";
		cin >> input;	

		if (input >= 1)
		{
			pos++; total++;
		}
		else if (input <= -1)
		{
			neg++; total++;
		}
		if (pos == 0 && neg == 0)
		{
			total++;
		}
		sum += input;
		avg = sum / total;
	}

	/* The above function sticks the user into a loop and and calculates
	all numbers added at the end of the loop. The only way to end the
	loop is inputing 0. */

	cout << endl;
	cout << "# of positives = " << pos << endl;
	cout << "# of negatives = " << neg << endl;
	cout << "The sum is = " << sum << endl;

	/* These are the variables saved from what was inputed into the loop
	and will output the values from the loop. The sum value,similar to the
	average, is from the equation at the bottom of the loop. */

	cout << fixed << showpoint << setprecision(2); 	
	cout << "The average is = " << avg << endl;
	cout << endl;

	/* The average is calculated with the final equation at the bottom
	of the loop. Finally in order to have a double output, we must have
	all variables affecting the average become doubles. */

	return 0;
}
	
	

	
