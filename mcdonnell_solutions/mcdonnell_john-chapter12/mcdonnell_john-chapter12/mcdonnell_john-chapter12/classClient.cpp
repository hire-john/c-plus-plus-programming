/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/24/2011
Chapter 12 Programming Exercises Question 4
Program Description:
Create and Implement a class. This was by far my favorite assignment. 
*/


#include <iostream>
#include "minutesSeconds.h"
using namespace std;

int main(){

	// The code below uses all of the minutesSeconds class methods and attributes

	int objOneMinutes, objOneSeconds, objTwoMinutes, objTwoSeconds;

	cout << "Enter Object #1's minutes: ";
	cin >> objOneMinutes;
	cout << "Enter Object #1's seconds: ";
	cin >> objOneSeconds;
	
	cout << "Enter Object #2's minutes: ";
	cin >> objTwoMinutes;
	cout << "Enter Object #2's seconds: ";
	cin >> objTwoSeconds;

	minutesSeconds objectOne(objOneMinutes, objOneSeconds);
	minutesSeconds objectTwo(objTwoMinutes, objTwoSeconds);

	cout << "*********************************" << endl; // UI line

	if(objectOne.equalityTest(objectTwo))
	{
		cout << "Objects are Equal" << endl;
	}else{
		cout << "Objects are not Equal" << endl;
	}
	
	cout << "*********************************" << endl; // UI line

	if(objectOne.isLess(objectTwo))
	{
		cout << "Object 1 is less than Object 2" << endl;
	}

	if(objectOne.isGreater(objectTwo))
	{
		cout << "Object 1 is greater than Object 2" << endl;
	}

	cout << "Sum of both objects: " << endl;
	objectOne.addTimes(objectTwo);

	cout << "*********************************" << endl; // UI line

	cout << "Difference of Both Objects: " << endl;
	objectOne.subtractTimes(objectTwo);

	cout << "*********************************" << endl; // UI line

	cout << "Object #1 minutes:" << objectOne.getMinutes() << endl;
	cout << "Object #1 seconds:" << objectOne.getSeconds() << endl;
	cout << "Object #2 minutes:" << objectOne.getMinutes() << endl;
	cout << "Object #2 seconds: "  << objectTwo.getSeconds() << endl;

	cout << "*********************************" << endl; // UI line

	cout << "Object #1 total seconds: " << objectOne.getTotalSeconds() << endl;
	cout << "Object #2 total seconds: "  << objectTwo.getTotalSeconds() << endl;

	cin.get();
	cin.get();

	return 0;
}