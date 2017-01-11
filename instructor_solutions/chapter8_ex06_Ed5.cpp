// Chapter 8 Exercise 6
// Written by Ken Adcock
// Cleveland State Community College
// CIS 1610
// Programming and Problem Solving with C++ Brief 5th Edition
// Dale and Weems
// 

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// function prototypes
void getString(string&) ;
void displayChar (char ) ;

int main()
{
	string instring, sub ;
	char letter ;

	int len, ipos ;

	getString(instring);
	len = instring.length() ;
	cout << "Phonetic version is: " ;

// see page 426 to refer to for statement
	ipos = 0;
	while ( ipos <= len-1)
	{
		sub = instring.substr(ipos, 1);
		letter = sub[0];
		letter = toupper(letter) ;
		if (isalpha(letter) == 0)
			cout << "Invalid " << letter << ", character must be alphabetic. " << endl;
		else
		
			displayChar(letter) ;
		ipos = ipos + 1;
	
	}
	cout << endl << endl ;
	cin.get() ;
	cin.get() ;

	return 0 ;
}

void getString(string& input)
{
	

	do
	{

		cout << "Enter string: "  ;
		cin >> input ;
		if (input.length() <= 0)
			cout << "Length of string must be greater than 0, please retry " << endl ;
	}
	while (input.length() <= 0) ;

	return  ;
}




void displayChar (char letter)
{
		
	
	if(letter == 'A')
		cout << " Alpha " ;
	else
		if(letter== 'B')
			cout << " Bravo " ;
		else
			if (letter == 'C')
				cout << " Charlie " ;
			else
				if(letter == 'D')
					cout << " Delta " ;
				else
					if(letter == 'E')
						cout << " Echo " ;
					else
						if (letter == 'F')
							cout << " Foxtrot " ;
						else
							if (letter == 'G')
								cout << " Golf " ;
							else
								if(letter == 'H')
									cout << " Hotel " ;
								else
									if(letter == 'I')
										cout << " India " ;
									else
										if(letter == 'J')
											cout << " Juliet "  ;
										else
											if(letter == 'K')
												cout << " Kilo " ;
											else
												if(letter == 'L')
													cout << " Lima " ;
												else
													if(letter == 'M')
														cout << " Mike " ;
													else
														if (letter == 'N')
														cout << " November " ;
													else
														if(letter == 'O')
														cout << " Oscar " ;
													else
														if(letter =='P')
															cout << " Papa " ;
														else
															if(letter == 'Q')
																cout << " Quebec " ;
															else
																if(letter == 'R')
																	cout << " Romeo " ;
																else
																	if(letter == 'S')
																		cout << " Sierra " ;
																	else
																		if(letter == 'T')
																			cout << " Tango " ;
																		else
																			if(letter == 'U')
																				cout << " Uniform " ;
																			else
																				if(letter == 'V')
																					cout << " Victor " ;
																				else
																					if(letter == 'W')
																						cout << " Whiskey " ;
																					else
																						if(letter == 'X')
																							cout << " X-ray " ;
																						else
																							if(letter == 'Y')
																								cout << " Yankee " ;
																							else
																								if(letter == 'Z' )
																									cout << " Zulu " ;
																								else
																									cout << "Letter entered was not alphabetic " << endl;




	

	return  ;
}


	

	
	

