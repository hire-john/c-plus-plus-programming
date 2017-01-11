/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/17/2011
Chapter 11 Programming Exercises Question 3
Program Description:
Output ICAO string based on input string & characters. Use an Array instead of switch.
*/

#include <iostream> // i o
#include <string> // for string

using namespace std;

int main()
{
	string icaoArray[26] = {"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Gamma", "Hotel", "India", "Juliet", "Kilo", "Limo", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "Xray", "Yankee", "Zulu"}; // declare and initialize array

	string inputString, currentChar;
	char letter;
	int len, strPos, alphabetPosition;
	cout << "Please enter a string to convert to ICAO phoenetic alpabet:" << endl;
	
	getline(cin,inputString); // have user input a string
		
	len=inputString.length(); // determine length of string for loop

	strPos=0; // set the loop's starting value
	
	// begin string to char parse loop
	cout << "Phonetic Version is: \n" << "**********************" << endl;
	while(strPos < len){ 
		currentChar = inputString.substr(strPos, 1);  // trim string down to substring 
		letter=currentChar[0];

		if (isalpha(letter)) { // check that the input character is alpha 
		alphabetPosition = toupper(letter) - 'A'; // convert to uppercase and determine alphabet position
		cout << icaoArray[alphabetPosition] << endl;	// use current characters alphabet position as array index to output full version
		}else{
			if(letter==' '){ // handle blank spaces
				cout << "\n" << endl; 
			}else{
			cout << letter << " was not found!" << endl; // handle non ICAO characters
			}
		}
		strPos++; // increment the count variable
	}

	// end string to character parse loop

	cout << endl << "Press Enter to exit";

	cin.get(); // exit
}


