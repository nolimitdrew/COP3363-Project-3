/* Name: Andrew Stade
Date: 2/15/2019
Section: 0004
Assignment: Homework #3 Part III (Practice with Loops & Functions)
Due Date: 2/15/2019
About this project: This assignment will consist of writing different small pr$
Assumptions: The user will input positive and negative integers and 0. 

All work below was performed by Andrew Stade */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double toUSD (double money, char m); 
void menu();

int main ()
{
	int input = 1; // The users input to the first menu
	double money = 0; double moneyTwo = 0; double sum;  
	char choice; char choiceTwo; // Choice variables

        cout << "\nWelcome to the currency exchange calculator!" << endl;
	
	while (input != 0) // Loop will run until 0 is entered
	{
		menu();	 // Main menu function used throughout the program

		cout << "> " ;
		cin >> input;
		
		if (input == 1) // The first selection 
		{
			cout << "What amount would you like to convert? > ";
			cin >> money;
						
			if (money >= 0) // Positive value for money entered
			{
				cout << 
				"Which currency would you like to convert to USD?" 
				<< endl;
	
				cout << "P - Pound	E - Euro	Y - Yen"
				 << endl;
				
				cout << "> ";
				cin >> choice;
	      			if(choice == 'p' || choice == 'P' )
               			{
					cout << money << 
					" Pounds converts to ";                
	        		}
				else if(choice == 'E' || choice == 'e')
                		{
					cout << money << " Euros converts to ";
				}
				else if(choice == 'Y' || choice == 'y')
                		{
					cout << money << " Yen converts to ";
				}
				cout << toUSD(money, choice) 
				<< " US Dollars." << endl;
				
				cout << endl;
			}
			else if (money < 0) // A negative value was entered
			{
				cout << 
				"Invalid amount entered. Amount must be non-negative." 
				<< endl; 		 
				
				cout << endl;
			}
		}
		else if (input == 2) // Adding currency values selection
		{
			cout << 
			"Enter type of first currency\tP - Pound\tE - Euro\tY - Yen" 
			<< endl;
			
			cout << "> ";
			cin >> choice;
			
			cout << "Enter amount of first currency" << endl;
			
			cout << "> ";
			cin >> money;
			
			cout << 
			"Enter type of second currency\tP - Pound\tE - Euro\tY - Yen" 
			<< endl;
                        
			cout << "> ";
                        cin >> choiceTwo;
                        
			cout << "Enter amount of second currency" << endl;
                        
			cout << "> ";
                        cin >> moneyTwo;
			
			if (money >= 0 && moneyTwo >= 0) // Positive value only
			{
				sum = toUSD(money, choice) + 
				toUSD(moneyTwo, choiceTwo);
				
				cout << "This would equal " << sum 
				<< " US dollars" << endl;
				
				cout << endl;
			}
			else // A negative value was entered
			{
				cout << 
				"Invalid amount entered. Amounts must be non-negative." 
				<< endl;
				
				cout << endl;
			}
		}
		else if (input != 0) // Entered a # besides  1,2, or 0
		{
			cout << "Invalid selection. Try again." << endl;
			cout << endl;
		} 
	}	
	cout << "Goodbye!" << endl;	 // If 0 is entered, this will print
	cout << endl;
	
	return 0;
}

void menu()
{
        cout << "Please select one of the following options: " << endl;
        cout << "1 - Convert foregin Amount to USD" << endl;
        cout << "2 - Add foreign amounts" << endl;
        cout << "0 - Quit" << endl;
        cout << "----------------------------------------" << endl;
	// A function for the main menu of the program
	// It didnt need its own function, but the directions called for one
}

double toUSD(double money, char choice) // This function works all conversions
{
	const double P = 0.77; const double E = 0.88; const double Y = 109.74;
	double conversionRate;

	if(choice == 'p' || choice == 'P' )
	{	
		conversionRate = P;
	}
	else if(choice == 'E' || choice == 'e')
	{
		conversionRate = E;
	}
	else if(choice == 'Y' || choice == 'y')
	{
		conversionRate = Y;
	}
	return  money/conversionRate;	// Prints the converted money value
}


