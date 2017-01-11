/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:1/29/2011
Chapter/Assignment Section/Problem: 2/Programming Problems/2
Program Description:
This program was created as an introductory lesson to cout, endl and various other C++ fundamentals. Its purpose is to
print the all the possible ordered permutations to the users output device. 
*/

#include <iostream> // include io objects
#include <string> // include user defined data type

using namespace std; // declare namespace


int main() 
{
	const string LINE_ONE = "I saw the big brown bear. "; // set a named constant for element one of the set
	const string LINE_TWO = "The big brown bear saw me. "; // set a named constant for element two of the set
	const string LINE_THREE = "Oh! What a frightening experience! "; // set a named constant for element three of the set
	const string PERMUTATION_DIVDER = "*******************************************"; // draw a delineation between permutations

	// Define and assign the permutations to named constants below
	const string PERMUTATION_ONE = LINE_ONE + LINE_TWO + LINE_THREE;
	const string PERMUTATION_TWO = LINE_ONE + LINE_THREE + LINE_TWO;
	const string PERMUTATION_THREE = LINE_TWO + LINE_ONE + LINE_THREE;
	const string PERMUTATION_FOUR = LINE_TWO + LINE_THREE + LINE_ONE;
	const string PERMUTATION_FIVE = LINE_THREE + LINE_TWO + LINE_ONE;
	const string PERMUTATION_SIX = LINE_THREE + LINE_ONE + LINE_TWO;

	// display permutation title, divider and permutation for permutations 1-6
	cout << "Permutation One:" << endl; // display permutation title 
	cout << PERMUTATION_DIVDER << endl; // display permutation divider
	cout << PERMUTATION_ONE << endl; // display permutation
	cout << "Permutation Two:" << endl;
	cout << PERMUTATION_DIVDER << endl;
	cout << PERMUTATION_TWO << endl;
	cout << "Permutation Three:" << endl;
	cout << PERMUTATION_DIVDER << endl;
	cout << PERMUTATION_THREE << endl;
	cout << "Permutation Four:" << endl;
	cout << PERMUTATION_DIVDER << endl;
	cout << PERMUTATION_FOUR << endl;
	cout << "Permutation Five:" << endl;
	cout << PERMUTATION_DIVDER << endl;
	cout << PERMUTATION_FIVE << endl;
	cout << "Permutation Six:" << endl;
	cout << PERMUTATION_DIVDER << endl;
	cout << PERMUTATION_SIX << endl;

	// end program inform user to press anykey
	cout << "Press ENTER key to exit";
	cin.get(); // obtain input close console


	return 0; //  inform the operating system everything ran correctly and program can terminate
}