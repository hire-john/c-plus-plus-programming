/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/24/2011
Chapter 12 Programming Exercises Question 4
Program Description:
Create and Implement a class. This was by far my favorite assignment. 
*/

#include "minutesSeconds.h"
#ifndef IOSTREAM
#include <iostream>
#define IOSTREAM
#endif

using namespace std; // use standard library namespace

// default constructor

minutesSeconds::minutesSeconds()
{
		minutes = 0;
		seconds = 0;
}

//  constructor w/ user-supplied arguments

minutesSeconds::minutesSeconds(int initMinutes, int initSeconds)
{
	minutes = initMinutes;
	seconds = initSeconds;
}

// return objects minutes

int minutesSeconds::getMinutes() const
{
	return minutes;
}

// return objects seconds

int minutesSeconds::getSeconds() const
{
	return seconds;
}

// Return objects total input time as seconds

int minutesSeconds::getTotalSeconds() const
{
	int totalSeconds;
	totalSeconds = convertToSeconds(minutes) + seconds;
	return totalSeconds;
}

// Return the sum of two minutesSeconds objects

void minutesSeconds::addTimes(minutesSeconds object2) const
{
	int timeSum, numberOfMinutes, numberOfSeconds;
	
	timeSum = (convertToSeconds(minutes) + seconds) + (convertToSeconds(object2.minutes) + object2.seconds);
	numberOfMinutes = timeSum / 60;
	numberOfSeconds  = timeSum % 60;
	cout << numberOfMinutes << " minutes "  << numberOfSeconds << " seconds" << endl;
}

// Return the difference of two minutesSeconds objects

void minutesSeconds::subtractTimes(minutesSeconds object2) const
{
	int timeDifference, numberOfMinutes, numberOfSeconds;
	timeDifference = (convertToSeconds(minutes) + seconds) - (convertToSeconds(object2.minutes) + object2.seconds);
	if(timeDifference < 0) {
		cout << "00:00" << endl;
	}else{
	numberOfMinutes = timeDifference / 60;
	numberOfSeconds = timeDifference % 60;
	cout << numberOfMinutes << " minutes "  << numberOfSeconds << " seconds" << endl;
	}
}

// performs test for equality and returns true is so

bool minutesSeconds::equalityTest(minutesSeconds object2) const
{
	if(getTotalSeconds() == object2.getTotalSeconds()) {
		return true;
	}else{
	return false;
	}
}

// performs greater than check

bool minutesSeconds::isGreater(minutesSeconds object2) const
{
	if(getTotalSeconds() > object2.getTotalSeconds())
	{
		return true;
	}else{
		return false;
	}
}

// less than check

bool minutesSeconds::isLess(minutesSeconds object2) const
{
	if(getTotalSeconds() < object2.getTotalSeconds())
	{
		return true;
	}else{
		return false;
	}
}


// PRIVATE METHODS ****************************************************************

// define a private function that will convert minutes into seconds 
// since all calulations will require this conversion and will be used often


int minutesSeconds::convertToSeconds(int initMinutes) const
{
		int convertedMinutes;
		convertedMinutes = (initMinutes * 60);
		return convertedMinutes;
}