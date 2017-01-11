// Chapter 12 Exercise 3
// Written by Ken Adcock
// Cleveland State Community College
// CIS 1610
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems
// 
// using string input
//
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// function prototypes
string getString() ;
void displayChar (char ) ;

int main()
{
	string instring, sub ;
	char letter ;
	int len, ipos ;

	instring = getString();
	cout << "Phonetic version is: " ;
	len = instring.length() ;


// see page 426 to refer to for statement

	for (ipos = 0 ; ipos <= len-1; ipos++)
	{
		sub = instring.substr(ipos, 1);
		letter = sub[0];
		if (isalpha(letter) == 0)
			cout << "Will skip character " << letter <<  endl;
		else
		
			displayChar(letter) ;
	
	}
	cout << endl << endl ;
	cin.get() ;
	cin.get() ;

	return 0 ;
}

string getString()
{
	string input ;

	do
	{

		cout << "Enter string: "  ;
		cin >> input ;
		if (input.length() <= 0)
			cout << "Length of string must be greater than 0, please retry " << endl ;
	}
	while (input.length() <= 0) ;

	return input ;
}

void displayChar (char character)
{
	
	string icao[26] ;
	icao[0] = "Alpha" ;
	icao[1] = "Bravo" ;
	icao[2] = "Charlie" ;
	icao[3] = "Delta" ;
	icao[4] = "Echo" ;
	icao[5] = "Foxtrot" ;
	icao[6] = "Golf" ;
	icao[7] = "Hotel" ;
	icao[8] = "India" ;
	icao[9] = "Juliet" ;
	icao[10] = "Kilo" ;
	icao[11] = "Lima" ;
	icao[12] = "Mike" ;
	icao[13] = "November" ;
	icao[14] = "Oscar" ;
	icao[15] = "Papa" ;
	icao[16] = "Quebec" ;
	icao[17] = "Romeo" ;
	icao[18] = "Sierra" ;
	icao[19] = "Tango" ;
	icao[20] = "Uniform" ;
	icao[21] = "Victor" ;
	icao[22] = "Whiskey" ;
	icao[23] = "X-ray" ;
	icao[24] = "Yankee" ;
	icao[25] = "Zulu" ;
	int ipos ;
	character = toupper(character) ;
	ipos = int(character) ;
//	cout << " ASCII value = " << ipos << " for " << character << endl;
	ipos = ipos - 65;
	cout << icao[ipos] << " " ;


		return ;
}





	

	