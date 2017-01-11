
#include "time.h"

Time::Time(){
	seconds = 0;
	minutes = 0;
}

// User defined minutes and seconds
Time::Time(long min, long sec){
	
	if (sec >= 0) seconds = sec;
	else seconds = 0;

	if (min >= 0) minutes = min;
	else minutes = 0;
	
	// If the user entered more than sixty seconds,
	// add to minutes and remove 60 seconds
	while (seconds > 59) {
		minutes++;
		seconds = seconds -60;
	}

}

// Returns the total time in seconds
long Time::getTime(){ 
	return ((minutes * 60) + seconds);
}
// Chapter 11 Programming Problem 4
// Written by Nathan Garner
// Cleveland State Community College
// CIS 1610 
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems
//

// Returns the seconds portion of the time
long Time::getSeconds(){ 
	return seconds;
}
// Returns the minutes portion of the time
long Time::getMinutes(){
	return minutes;
}

// Boolean comparison observers

// Compares the current object to t1, returns true if they are equal 
bool Time::isEqualTo(Time t1) {
	if (seconds == t1.seconds && minutes == t1.minutes) return true;
	else return false;
}

// Compares the current object to t1, returns true if current object is greater
bool Time::isGreaterThan(Time t1){
	if (getTime() > t1.getTime()) return true;
	else return false;
}

// Compares the current object to t1, returns true if current object is less
bool Time::isLessThan(Time t1){ 
	if (getTime() < t1.getTime()) return true;
	else return false;
}

// Transformers

// Adds t1 to the current object
void Time::add(Time t1){
	seconds = seconds + t1.seconds;
	minutes = minutes + t1.minutes;

	// If there are more than sixty seconds,
	// add to minutes and remove 60 seconds
	while (seconds > 59) {
		minutes++;
		seconds = seconds - 60;
	}
}
 
// Subtracts t1 from the current object
void Time::subtract(Time t1){
	// Convert everything to seconds to simplify the calcualations
	long newTime = getTime()-t1.getTime();

	if (newTime >= 0) {
		seconds = newTime;
		minutes = 0; // All the time is now in seconds until we split it back up
	}
	else {
		seconds = 0; 
		minutes = 0;
	}

	// If there are more than sixty seconds,
	// add to minutes and remove 60 seconds
	while (seconds > 59) {
		minutes++;
		seconds = seconds - 60;
	}
}
