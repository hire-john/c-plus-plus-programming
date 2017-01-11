// Chapter 7 Exercise 5  CIS 1610
// Programming and Problem Solving with C++ 5th Edition
// Nell Dale and Chip Weems
//
// Program written by Ken Adcock

// Program allows for the entry of numeric military time and displays the corresponding
// time in English
// Program illustrates the switch statement and the do/while statement

//
#include <iostream>
#include <string>
using namespace std;



int main()
{
	int hour, min ;
	
	string hourDesc ;

//  get military time	

	hour = 0 ;
	min = 0 ;
	bool dataOk  ;
	do
	{
	dataOk = true ;
	cout << "Enter hour and minutes in 24 hour military format. For exmaple 16 30 is 4:30 p.m."<< endl;
	cout << "Enter hour and minutes " << endl ;

	cin >> hour>> min ;


	if(hour < 0 || hour > 24)
	{
		cout << "Hour must be between 0 and 24, pleae retry" << endl ;
		dataOk = false;
	}

	if(min < 0 || min > 59)
	{
		cout << "Minutes must be between 0 and 59, please retry" << endl ;
		dataOk = false ;
	}
	}
	while (!dataOk) ;


	


//	determine am or pm and convert hour to civilian time
	
		
		if( hour == 24 || hour <= 11)
			hourDesc =  "AM" ;
		else
			hourDesc = "PM";
		
		if (hour > 12)
			hour = hour - 12 ;
		
		
		


//	display Time 
	
		bool allDone = false ;

		if( hour == 12 && min == 0)
		{
			cout << "Noon" << endl ;
			allDone = true ;
		}

		if(hour == 0 && min == 0)
		{
			cout << "Midnight" << endl ;
			allDone = true ;
		}

		if (!allDone)
		{
	//		display hour 
				
		switch (hour)
		{
		case 1 :
			cout << "One " ;
			break ;
		case 2 :
			cout << "Two " ;
			break ;
		case 3 :
			cout << "Three " ;
			break ;
		case 4 :
			cout << "Four " ;
			break ;
		case 5 :
			cout << "Five " ;
			break ;
		case 6 :
			cout << "Six " ;
			break ;
		case 7 :
			cout << "Seven " ;
			break ;
		case 8 :
			cout << "Eight " ;
			break ;
		case 9 :
			cout << "Nine " ;
			break ;
		case 10 :
			cout << "Ten " ;
			break ;
		case 11 :
			cout << "Eleven " ;
			break ;
		case 12 :
		case 0:
			cout << "Twelve " ;
			break ;
		}
		


	//		display minutes
				
		int tens, units ;
		bool tensDone = false ;
		tens = min/10 ;   // tens position of min
		units = min% 10 ; // units position of min
		

		switch (tens)
		{
		case 1:
			tensDone = true ;
			switch (units)     // note that this switch is nested within another switch statement
			{
			case 0:
				cout << "ten " ;
				break;
			case 1:
				cout << "eleven " ;
				break;
			case 2:
				cout << "twelve " ;
				break;
			case 3:
				cout << "thirteen " ;
				break;
			case 4:
				cout << "fourteen " ;
				break;
			case 5:
				cout << "fifteen " ;
				break;
			case 6:
				cout << "sixteen " ;
				break;
			case 7:
				cout << "seventeen " ;
				break;
			case 8:
				cout << "eithteen " ;
				break;
			case 9:
				cout << "nineteen " ;
				break;
			}
			break ;
			case 2:
				cout << "twenty " ;
				break ;
			case 3:
				cout << "thirty " ;
				break ;
			case 4:
				cout << "forty " ;
				break ;
			case 5:
				cout << "fifty " ;
				break ;
		}
		if (!tensDone || units == 0)

		{
			switch (units)
			{
			case 1 :
			cout << "one " ;
			break ;
		case 2 :
			cout << "two " ;
			break ;
		case 3 :
			cout << "three " ;
			break ;
		case 4 :
			cout << "four " ;
			break ;
		case 5 :
			cout << "five " ;
			break ;
		case 6 :
			cout << "six " ;
			break ;
		case 7 :
			cout << "seven " ;
			break ;
		case 8 :
			cout << "eight " ;
			break ;
		case 9 :
			cout << "nine " ;
			break ;
			}
		}

		

			// this displays if time is not "noon" or "midnight"


			cout << hourDesc << endl ;

		}

	


	cin.get() ;
	return 0;
}


	

	

