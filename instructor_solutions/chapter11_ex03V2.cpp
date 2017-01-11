// Chapter 12 Exercise 3
// Written by Ken Adcock
// Cleveland State Community College
// CIS 1610
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems
// 
// version using the cin.get(char) statement

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// function prototype

void displayChar (char ) ;

int main()
{
	
	char letter ;
	bool keepOn = true ;
	bool firstTime = true;
	cout << "Enter string: ";
	
	do 
	{
		cin.get(letter) ;
		if(firstTime)
		{
			cout << "Phonetic version is: " ;
			firstTime = false;
		}
		if(int(letter) == 10 || int(letter) == 13)
			keepOn = false;
		else
		
			displayChar(letter);
	} while (keepOn) ;


	

	cout << endl << endl ;
	cin.get() ;
	cin.get() ;

	return 0 ;
}



void displayChar (char character)
{
	int ipos ;
	string icao[26] ;
	icao[0] = "Alpha " ;
	icao[1] = "Bravo " ;
	icao[2] = "Charlie " ;
	icao[3] = "Delta " ;
	icao[4] = "Echo " ;
	icao[5] = "Foxtrot " ;
	icao[6] = "Golf " ;
	icao[7] = "Hotel " ;
	icao[8] = "India " ;
	icao[9] = "Juliet " ;
	icao[10] = "Kilo " ;
	icao[11] = "Lima " ;
	icao[12] = "Mike " ;
	icao[13] = "November " ;
	icao[14] = "Oscar " ;
	icao[15] = "Papa " ;
	icao[16] = "Quebec " ;
	icao[17] = "Romeo " ;
	icao[18] = "Sierra " ;
	icao[19] = "Tango " ;
	icao[20] = "Uniform " ;
	icao[21] = "Victor " ;
	icao[22] = "Whiskey " ;
	icao[23] = "X-ray " ;
	icao[24] = "Yankee " ;
	icao[25] = "Zulu " ;
	
	character = toupper(character) ;
	ipos = int(character) ;
//	cout << " ASCII value = " << ipos << " for " << character << endl;
	if (ipos >= 65 && ipos <= 90)
	{
		ipos = ipos - 65;
		cout << icao[ipos]  ;
	}
	else
		cout << "Character must be alphabetic " << character << endl ;

		return ;
}





	

	