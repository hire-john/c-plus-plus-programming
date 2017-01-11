/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:3/27/2011
Chapter 8 Programming Exercises Question 6
Program Description:
Converts a string into the ICAO translation using a function.
*/

#include <iostream> // i o
#include <string> // for string

using namespace std;

void makeICAO(char letter); // function prototype

int main()
{
	string inputString;
	string currentChar;
	char letter;
	int len, strPos;
	cout << "Please enter a string to convert to ICAO phoenetic alpabet:" << endl;
	
	getline(cin,inputString); // have user input a string
		
	len=inputString.length(); // determine length of string for loop

	strPos=0; // set the loop's starting value
	
	// begin string to char parse loop
	cout << "Phonetic Version is: " << endl;
	while(strPos < len){
		currentChar = inputString.substr(strPos, 1);  // 
		letter=currentChar[0];
		if (isalpha(letter)) { // check that the input character is alpha and call makeICAO function otherwise do nothing.
		makeICAO(letter); // pass the letter variable as an argument to the makeICAO function
		}
		strPos++; // increment the count variable
	}

	// end string to character parse loop

	cout << endl << "Press Enter to exit";

	cin.get(); // exit
}

// Create a function that converts each of the parsed alpha characters to upper case and use a conditional that finds the appropriate match for the letter
void makeICAO(char letter)
{
	string wordOutput;
	letter=toupper(letter);
	switch (letter)
	{
	default: wordOutput="No Translation!";
		break;
	case 'A': wordOutput="Alpha";
		break;
	case 'B': wordOutput="Brave";
		break;
	case 'C': wordOutput="Charlie";
		break;
	case 'D': wordOutput="Delta";
		break;
	case 'E': wordOutput="Echo";
		break;
	case 'F': wordOutput="Foxtrot";
		break;
	case 'G': wordOutput="Golf";
		break;
	case 'H': wordOutput="Hotel";
		break;
	case 'I': wordOutput="India";
		break;
	case 'J': wordOutput="Juliet";
		break;
	case 'K': wordOutput="Kilo";
		break;
	case 'L': wordOutput="Lima";
		break;
	case 'M': wordOutput="Mike";
		break;	
	case 'N': wordOutput="November";
		break;
	case 'O': wordOutput="Oscar";
		break;
	case 'P': wordOutput="Papa";
		break;
	case 'Q': wordOutput="Quebec";
		break;
	case 'R': wordOutput="Romeo";
		break;
	case 'S': wordOutput="Sierra";
		break;
	case 'T': wordOutput="Tango";
		break;
	case 'U': wordOutput="Uniform";
		break;
	case 'V': wordOutput="Victor";
		break;
	case 'W': wordOutput="Whiskey";
		break;
	case 'X': wordOutput="X-Ray";
		break;
	case 'Y': wordOutput="Yankee";
		break;
	case 'Z': wordOutput="Zulu";
		break;
	}
	cout << wordOutput << " ";
}

