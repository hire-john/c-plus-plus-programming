/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:3/06/2011
Chapter 7 Programming Exercises Question 5
Program Description:
User inputs a 24 hour time and program returns the time in a 12 hour string form.
*/

#include <iostream>
#include <string>
#include <cctype>


using namespace std;

int main() 
{

	// declare variables 

	int hourInput;
	int minuteInput;
	string hourOutput;
	string minuteOutput;
	string meridiem;

	// diplay prompt
	cout << "Enter # of Hours a space and # of Minutes in 24 hour format:" << endl;

	// get user input

	cin >> hourInput >> minuteInput;

	if(!cin){
		cout << "You Entered the wrong data type";
	}else{

	// Determine if time input is ante meridiem or post meridiem

	if(hourInput < 12)
		meridiem = "AM";
	else
		meridiem="PM";
	
	// check for special input cases first then check for all other cases

	if(hourInput==0 && minuteInput==0){
		hourOutput="Midnight";
		minuteOutput="";
		meridiem="";
	}else if(hourInput == 12 && minuteInput ==0){
		hourOutput="Noon";
		minuteOutput="";
		meridiem="";
	}
	else{

	// check hour input and assign appropriate output string

	switch (hourInput)
	{
	default: hourOutput="Invalid Input";
		break;
	case 0: hourOutput="Twelve";
		break;
	case 1: hourOutput="One";
		break;
	case 2: hourOutput="Two";
		break;
	case 3: hourOutput="Three";
		break;
	case 4: hourOutput="Four";
		break;
	case 5: hourOutput="Five";
		break;
	case 6: hourOutput="Six";
		break;
	case 7: hourOutput="Seven";
		break;
	case 8: hourOutput="Eight";
		break;
	case 9: hourOutput="Nine";
		break;
	case 10: hourOutput="Ten";
		break;
	case 11: hourOutput="Eleven";
		break;
	case 12: hourOutput="Twelve";
		break;
	case 13: hourOutput="One";
		break;
	case 14: hourOutput="Two";
		break;
	case 15: hourOutput="Three";
		break;
	case 16: hourOutput="Four";
		break;
	case 17: hourOutput="Five";
		break;
	case 18: hourOutput="Six";
		break;
	case 19: hourOutput="Seven";
		break;
	case 20: hourOutput="Eight";
		break;
	case 21: hourOutput="Nine";
		break;
	case 22: hourOutput="Ten";
		break;
	case 23: hourOutput="Eleven";
		break;
	}

	// check minute input and assign appropriate output string

	if(hourOutput !="Invalid Input"){
	
	switch(minuteInput)
	{
	default:"Invalid Input";
		break;
	case 0:minuteOutput="";
		break;
	case 1:minuteOutput="O'One";
		break;
	case 2:minuteOutput="O'Two";
		break;
	case 3:minuteOutput="O'Three";
		break;
	case 4:minuteOutput="O'Four";
		break;
	case 5:minuteOutput="O'Five";
		break;
	case 6:minuteOutput="O'Six";
		break;
	case 7:minuteOutput="O'Seven";
		break;
	case 8:minuteOutput="O'Eight";
		break;
	case 9:minuteOutput="O'Nine";
		break;
	case 10:minuteOutput="Ten";
		break;
	case 11:minuteOutput="Eleven";
		break;
	case 12:minuteOutput="Twelve";
		break;
	case 13:minuteOutput="Thirteen";
		break;
	case 14:minuteOutput="Fourteen";
		break;
	case 15:minuteOutput="Fifteen";
		break;
	case 16:minuteOutput="Sixteen";
		break;
	case 17:minuteOutput="Seventeen";
		break;
	case 18:minuteOutput="Eighteen";
		break;
	case 19:minuteOutput="Nineteen";
		break;
	case 20:minuteOutput="Twenty";
		break;
	case 21:minuteOutput="Twenty One";
		break;
	case 22:minuteOutput="Twenty Two";
		break;
	case 23:minuteOutput="Twenty Three";
		break;
	case 24:minuteOutput="Twenty Four";
		break;
	case 25:minuteOutput="Twenty Five";
		break;
	case 26:minuteOutput="Twenty Six";
		break;
	case 27:minuteOutput="Twenty Seven";
		break;
	case 28:minuteOutput="Twenty Eight";
		break;
	case 29:minuteOutput="Twenty Nine";
		break;
	case 30:minuteOutput="Thirty";
		break;
	case 31:minuteOutput="Thirty One";
		break;
	case 32:minuteOutput="Thirty Two";
		break;
	case 33:minuteOutput="Thirty Three";
		break;
	case 34:minuteOutput="Thirty Four";
		break;
	case 35:minuteOutput="Thirty Five";
		break;
	case 36:minuteOutput="Thirty Six";
		break;
	case 37:minuteOutput="Thirty Seven";
		break;
	case 38:minuteOutput="Thirty Eight";
		break;
	case 39:minuteOutput="Thirty Nine";
		break;
	case 40:minuteOutput="Fourty";
		break;
	case 41:minuteOutput="Fourty One";
		break;
	case 42:minuteOutput="Fourty Two";
		break;
	case 43:minuteOutput="Fourty Three";
		break;
	case 44:minuteOutput="Fourty Four";
		break;
	case 45:minuteOutput="Fourty Five";
		break;
	case 46:minuteOutput="Fourty Six";
		break;
	case 47:minuteOutput="Fourty Seven";
		break;
	case 48:minuteOutput="Fourty Eight";
		break;
	case 49:minuteOutput="Fourty Nine";
		break;
	case 50:minuteOutput="Fifty";
		break;
	case 51:minuteOutput="Fifty One";
		break;
	case 52:minuteOutput="Fifty Two";
		break;
	case 53:minuteOutput="Fifty Three";
		break;
	case 54:minuteOutput="Fifty Four";
		break;
	case 55:minuteOutput="Fifty Five";
		break;
	case 56:minuteOutput="Fifty Six";
		break;
	case 57:minuteOutput="Fifty Seven";
		break;
	case 58:minuteOutput="Fifty Eight";
		break;
	case 59:minuteOutput="Fifty Nine";
		break;

} // end switch
	
} // end if not = invalid



} // end special conditions if

} // end cin check if

// output results

cout << hourOutput << " " << minuteOutput << " " << meridiem;
cin.get();
cin.get();

return 0;
}