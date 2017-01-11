// Chapter 11 Programming Problem 4
// Written by Nathan Garner
// Cleveland State Community College
// CIS 1610 
// Programming and Problem Solving with C++ 4th Edition
// Dale and Weems
//


#include <iostream>
#include "time.h"

using namespace std;

void printTimes(Time t, Time t1, Time t2);

int main() {
	
	Time t(2, 4);
	Time t1(4,5);
	Time t2;

	printTimes(t, t1, t2);

	cout << "\nAdding t1 to t\n\n";
	t.add(t1);
    	printTimes(t, t1, t2);

	cout << "\nAdding t1 to t2\n\n";
	t2.add(t1);
	printTimes(t, t1, t2);
    
	cout << "\nSubtracting t2 from t1\n\n";
	t1.subtract(t2);
	printTimes(t, t1, t2);

	cout << "\ngetTime results for t:" << t.getTime() << endl;

	cout << "\nt is greater than t2: ";
	if (t.isGreaterThan(t2) == true) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;

	cout << "\nt is less than t2: ";
	if (t.isLessThan(t2) == true) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;

	cout << "\nt1 is equal to t2: ";
	if (t1.isEqualTo(t2) == true) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;


	cin.get(); // type enter to end
	return 0;
}


void printTimes(Time t, Time t1, Time t2) {
		cout << "  Min:Sec     Min:Sec   Min:Sec" << endl;

		cout << "t = " << t.getMinutes() << ":" << t.getSeconds() <<
		"    t1 = " << t1.getMinutes() << ":" << t1.getSeconds() <<
		"  t2 = " << t2.getMinutes() <<  ":" << t2.getSeconds() << endl;
}
