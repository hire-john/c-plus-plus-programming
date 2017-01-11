// Chapter 5 Exercise 1
// Written by Ken Adcock
// Cleveland State Community College
// CIS 1610
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems

// Program inputs an alphabetic character and translates this character to a
// standard International Civil Aviation Organization word.

#include <iostream>
#include <cctype>

using namespace std;



int main()
{
	
	char letter ;
	
	// enter character
	cout << "Enter an uppercase character: "  ;
	cin >> letter ;
	letter = toupper(letter);    // make sure character is uppercase		
	
	if(letter == 'A')
		cout << "The letter A is Alpha " << endl;
	else
		if(letter== 'B')
			cout << "The letter B is Bravo " << endl;
		else
			if (letter == 'C')
				cout << "The letter C is Charlie " << endl;
			else
				if(letter == 'D')
					cout << "The letter D is Delta " << endl;
				else
					if(letter == 'E')
						cout << "The letter E is Echo " << endl;
					else
						if (letter == 'F')
							cout << "The letter F is Foxtrot " << endl;
						else
							if (letter == 'G')
								cout << "The letter G is Golf " << endl;
							else
								if(letter == 'H')
									cout << "The letter H is Hotel " << endl;
								else
									if(letter == 'I')
										cout << "The letter I is India " << endl;
									else
										if(letter == 'J')
											cout << "The letter J is Juliet " << endl ;
										else
											if(letter == 'K')
												cout << "The letter K is Kilo " << endl;
											else
												if(letter == 'L')
													cout << "The letter L is Lima " << endl;
												else
													if(letter == 'M')
														cout << "The letter M is Mike " << endl;
													else
														if (letter == 'N')
														cout << "The letter N is November " << endl;
													else
														if(letter == 'O')
														cout << "The letter O is Oscar " << endl;
													else
														if(letter =='P')
															cout << "The letter P is Papa " << endl;
														else
															if(letter == 'Q')
																cout << "The letter Q is Quebec " << endl;
															else
																if(letter == 'R')
																	cout << "The letter R is Romeo " << endl;
																else
																	if(letter == 'S')
																		cout << "The letter S is Sierra " << endl;
																	else
																		if(letter == 'T')
																			cout << "The letter T is Tango " << endl;
																		else
																			if(letter == 'U')
																				cout << "The letter U is Uniform " << endl;
																			else
																				if(letter == 'V')
																					cout << "The letter V is Victor " << endl;
																				else
																					if(letter == 'W')
																						cout << "The letter W is Whiskey " << endl;
																					else
																						if(letter == 'X')
																							cout << "The letter X is X-ray " << endl;
																						else
																							if(letter == 'Y')
																								cout << "The letter Y is Yankee " << endl;
																							else
																								if(letter == 'Z' )
																									cout << "The letter Z is Zulu " << endl;
																								else
																									cout << "Letter entered was not alphabetic " << endl;


	cout << endl  ;
	cin.get() ;
	cin.get() ;

	return 0 ;
}


