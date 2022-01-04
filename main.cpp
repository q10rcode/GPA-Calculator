/**************************************************************
* PROGRAMMED BY : Quinten Ridley
* PROJECT 02	: Repetition & Switch Statement
* CLASS			: CSC5
* SECTION		: MW 2:20PM-5:30PM
* DUE DATE		: 10/11/21
**************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**************************************************************
 *
 * CALCULATE GRADE POINT AVERAGE
 * ____________________________________________________________
 * This program will ask users for their letter grade in
 * and will convert the letter grades into points. The program
 * will collect the total of all the points and display the
 * gpa as output. The program will stop collecting grades
 * when the user enters "X". The program will run three times
 * and if the user has not entered any grades then it will
 * not output gpa and will begin the next loop.
 * ____________________________________________________________
 * INPUT
 *   letterGrade	 : The grades of the user
 *
 *
 * OUTPUT
 *   gpa			 : The grade point average
 *   total			 : The total amount points
 *
 **************************************************************/

int main()
{
	cout << left;
	cout << "************************************************\n";
	cout << "* PROGRAMMED BY : Quinten Ridley\n";
	cout << "* CLASS         : CSC5\n";
	cout << "* SECTION       : MW - 2:20PM-6:30PM\n";
	cout << "* PROJECT #2    : Repetition & Switch Statement\n";
	cout << "************************************************\n";
	cout << right;


	char letterGrade;		//Holds the letter grades
	float total;			//Holds points for calculating GPA
	float gpa;				//Holds the grade point average
	float classes; 			//The amount of classes taken
	int testNumber;			//Holds amount of time program loops

	testNumber = 0;
	for (int x = 1; x < 4; x++ ) //Makes program loop after while loop ends
	{
		classes = 0;
		total = 0;

		//Prints the current test run of the program
		cout << "TEST #" <<++testNumber << ":\n\n";


		do
		{
			cout << setw(46)
			     << "Enter Letter Grade (enter 'X' to exit):";
			cin >> letterGrade;

			switch (letterGrade)
			{
				case 'A':
				case 'a': total += 4; //A's are worth 4 points in the U.S.
						  classes++;  //Keeps track of classes taken
						  break;
				case 'B':
				case 'b': total += 3; //B's are worth 3 points in the U.S.
						  classes++;
						  break;
				case 'C':
				case 'c': total += 2; //C's are worth 2 points in the U.S.
						  classes++;
						  break;
				case 'D':
				case 'd': total += 1; //D's are worth 4 points in the U.S.
						  classes++;
						  break;
				case 'F':
				case 'f': total += 0; //F's are worth 0 points in the U.S.
						  classes++;
						  break;
				case 'X':
				case 'x':
						  break;
				default: cout << endl << setw(47)
							  << "Invalid letter grade, please try again\n\n";
			}
		} while (letterGrade != 'x' && letterGrade != 'X');  /* This ends
		 the do while loop whenever x is entered */

		//GPA is calculated by dividing grade points by the number of classes
		gpa = total / classes;


		if (classes != 0 ) //If x is the only thing entered
		{
			cout << setprecision(0) << fixed;
			cout << "\nTotal Grade Points:" << total << endl;
			cout << fixed << setprecision(2);
			cout << "GPA:" << gpa << endl << endl << endl;
		}
	}
	return 0;
}

