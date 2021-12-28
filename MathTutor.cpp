// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: Lab3.1
Project Name: Math Tutor
File Name: MathTutor.cpp
Description: adds two random numbers then displays the result after the enter key is pressed.
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: Ch 3 slides
*/

// Preprocessor directive placed here
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// set seed for rand()
	srand(time(0));

	// local variable declarations
	int randomOne = 1 + (rand());
	int randomTwo = 1 + (rand());
	int	answer;

	// Inform user what program does
	cout << "This program is intended to be a math tutor for young kids.";
	cout << " It will add two numbers and display the answer whenever the";
	cout << " enter key is pressed.\n" << endl;

	// A software algorithm would typically be executed after all data has been input
	
	cout << right << setw(5) << randomOne << endl;
	cout << right << setw(4) << randomTwo << endl;
	
	// tells user when ready hit etr
	cout << "-----";
	cin.get();

	// calculation
	answer = randomOne + randomTwo;

	// Program output done at end of program
	cout << right << setw(5) << answer << endl << endl;
	

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");


	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1:
This program is intended to be a math tutor for young kids. It will add two numbers and display the answer whenever the enter key is pressed.

  147
13255
-----
13402

Press any key to continue . . .

PROOF 2:
This program is intended to be a math tutor for young kids. It will add two numbers and display the answer whenever the enter key is pressed.

  432
30862
-----
31294

Press any key to continue . . .
*/