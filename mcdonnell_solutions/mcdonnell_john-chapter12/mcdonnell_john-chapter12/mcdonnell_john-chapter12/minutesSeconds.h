/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/24/2011
Chapter 12 Programming Exercises Question 4
Program Description:
Create and Implement a class. This was by far my favorite assignment. 
*/

class minutesSeconds 
{
public:
	minutesSeconds(); // default constructor
	minutesSeconds(int initMinutes, int initSeconds); // constructor
	int getMinutes() const; // displays minutes
	int getSeconds() const; // displays seconds
	int getTotalSeconds() const; // adds total seconds
	void addTimes(minutesSeconds object2) const; // adds two times and displays results
	void subtractTimes(minutesSeconds object2) const; // subtracts and displays two times
	bool equalityTest(minutesSeconds object2) const; // determines if times are equal
	bool isGreater(minutesSeconds object2) const; // check if one minutesSeconds object is greater than another
	bool isLess(minutesSeconds object2) const; // check if one minuteSeconds object is less than another
private:
	int minutes; // minutes attribute
	int seconds; // seconds attribute
	int convertToSeconds(int initMinutes) const; // function used to convert minutes to seconds. used in  various class methods
};
