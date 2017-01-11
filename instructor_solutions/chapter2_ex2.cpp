// Programming Problem 2, Chapter 2
// Programmnig and Problem Solving with C++
// Dale and Weems
// Written by Ken Adcock


#include <iostream>
#include <string>
using namespace std;

// set up named constants 
const string L1 = "I saw the big brown bear."  ;
const string L2 = "The big brown bear saw me." ;
const string L3 = "Oh! What a frightening experience!" ;

int main()
{

// output each permutation
// the problem stated that each permutation should have one output statement

// L1, L2, L3
	cout << L1 << endl << L2 << endl << L3 << endl << endl ;

// L1, L3, L2
	cout << L1 << endl << L3 << endl << L2 << endl << endl ;
// L2, L3, L1
	cout << L1 << endl << L2 << endl << L3 << endl << endl ;
// L2, L1, L3
	cout << L2 << endl << L1 << endl << L3 << endl << endl ;
// L3, L1, L2
	cout << L3 << endl << L1 << endl << L2 << endl << endl ;
// L3, L2, L1
	cout << L3 << endl << L2 << endl << L1 << endl << endl ;

	
	
	cin.get(); // type enter to end
	return 0 ;
}
		