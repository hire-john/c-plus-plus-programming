// Chapter 11 Programming Problem 4
// Written by Nathan Garner
// Cleveland State Community College
// CIS 1610 
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems
//


class Time
{
private:
	long minutes;
	long seconds;

public:
	Time();  // Default constructor minutes & seconds = zero
	Time(long minutes, long seconds); // User defined minutes and seconds
	
	// Observers
	long getTime();	// Returns the total time in seconds
	long getSeconds(); // Returns the seconds portion of the time
	long getMinutes(); // Returns the minutes portion of the time

	// Boolean comparison observers
	bool isEqualTo(Time t1); // Compares the current object to t1, returns true if they are equal 
	bool isGreaterThan(Time t1); // Compares the current object to t1, returns true if current object is greater
	bool isLessThan(Time t1); // Compares the current object to t1, returns true if current object is less

	// Transformers
	void add(Time t1); // Adds t1 to the current object
	void subtract(Time t1); // Subtracts t1 from the current object

};


	
