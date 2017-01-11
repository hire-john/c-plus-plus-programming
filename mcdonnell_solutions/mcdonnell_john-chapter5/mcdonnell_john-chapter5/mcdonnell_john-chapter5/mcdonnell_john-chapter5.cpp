/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:2/19/2011
Chapter 5 Programming Exercises Question 1
Program Description:
This program will take a word's initial as input and output the entire word. Trying to simplify 
*/

#include <iostream> // for cin and cout
#include <string> // for string

using namespace std;

int main(){

	string inputCharacter; // holder for user input
	string outputWord; // holder for output value
	cout << "Please enter the Initial of the Civic Aviation alphbet word you'd like to view. Type one letter from the English Alphabet:" << endl; // Instructions
	cin >> inputCharacter; // get user input
	int userInputLength= inputCharacter.length(); // determine length of string for error checking

	// if input is equal to an integer return error message
	if (inputCharacter=="1" || inputCharacter=="2" || inputCharacter=="3" || inputCharacter=="4" || inputCharacter=="5" || inputCharacter=="6" || 	inputCharacter=="7" || inputCharacter=="8" || inputCharacter=="9")
		outputWord="\nYou've entered an Integer";
	
	// if input is null or greater then 1 character in length return error message
	else if(userInputLength==0 || userInputLength > 1)
		outputWord="\nYou've entered something other than an initial - please restart program";
	
	// begin conditional checks for matching characters. Check for upper and lowercase. would use tolower but it's for char data only.
	// if input matchs a condition assign the word to the variable outputWord
	
	else if(inputCharacter=="A" || inputCharacter=="a")
		outputWord="Alpha";
	else if(inputCharacter=="B" || inputCharacter=="b")
		outputWord="Bravo";
	else if(inputCharacter=="C" || inputCharacter=="c")
		outputWord=="Charlie";
	else if(inputCharacter=="D" || inputCharacter=="d")
		outputWord="Delta";
	else if(inputCharacter=="E" || inputCharacter=="e")
		outputWord="Echo";
	else if(inputCharacter=="F" || inputCharacter=="f")
		outputWord="Foxtrot";
	else if(inputCharacter=="G" || inputCharacter=="g")
		outputWord="Golf";
	else if(inputCharacter=="H" || inputCharacter=="h")
		outputWord="Hotel";
	else if(inputCharacter=="I" || inputCharacter=="i")
		outputWord="India";
	else if(inputCharacter=="J" || inputCharacter=="j")
		outputWord="Juliet";
	else if(inputCharacter=="K" || inputCharacter=="k")
		outputWord="Kilo";
	else if(inputCharacter=="L" || inputCharacter=="l")
		outputWord="Lima";
	else if(inputCharacter=="M" || inputCharacter=="m")
		outputWord="Mike";
	else if(inputCharacter=="N" || inputCharacter=="n")
		outputWord="November";
	else if(inputCharacter=="O" || inputCharacter=="o")
		outputWord="Oscar";
	else if(inputCharacter=="P" || inputCharacter=="p")
		outputWord="Papa";
	else if(inputCharacter=="Q" || inputCharacter=="q")
		outputWord="Quebec";
	else if(inputCharacter=="R" || inputCharacter=="r")
		outputWord="Romeo";
	else if(inputCharacter=="S" || inputCharacter=="s")
		outputWord="Sierra";
	else if(inputCharacter=="T" || inputCharacter=="t")
		outputWord="Tango";
	else if(inputCharacter=="U" || inputCharacter=="u")
		outputWord="Uniform";
	else if(inputCharacter=="V" || inputCharacter=="v")
		outputWord="Victor";
	else if(inputCharacter=="W" || inputCharacter=="w")
		outputWord="Whiskey";
	else if(inputCharacter=="X" || inputCharacter=="x")
		outputWord="X-Ray";
	else if(inputCharacter=="Y" || inputCharacter=="y")
		outputWord="Yankee";
	else if(inputCharacter=="Z" || inputCharacter=="z")
		outputWord="Zulu";
	
	// display results to user

	cout << "You've entered: " << inputCharacter << " Which Means: " << outputWord << endl 
		<< "Hit enter to exit";
	cin.get(); 
	cin.get();

	return 0;
}