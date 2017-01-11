// CIS 1610  Programming in C++
// Chapter 3 Problem 3
// Calculates 15! using the traditional method and with Stirling's formula.
// Display the difference between the two methods
// Programming and Problem Solving with C++ 4th Edition  (Dale and Weems)
// Programmed by Ken Adcock

#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;

int main()
{
	const double PI = 3.14159; 
	const double N = 15;       
	double factorial;        //The exact value of 15!
	double stirlingFormula;  //Stirling's Formula for 15!
	double diffrence;        //Diffrence between actual and approximation

	// Exact calculation for 15! 
	factorial = N * (N - 1) * (N - 2) * (N - 3) * (N - 4) * 
		       (N - 5) * (N - 6) * (N - 7) * (N - 8) * (N - 9)
			   * (N - 10) * (N - 11) * (N - 12) * (N - 13) * (N - 14);

	// Stirling's Formula 
	stirlingFormula = exp(-N) * pow(N,N) * sqrt(2 * PI * N);

	diffrence = factorial - stirlingFormula;

	//Displays the difference between the exact and approximated value of 15!
	cout << fixed << setprecision(0) << "Display the diffrence between the two values for 15!" << endl << endl <<
		"Fifteen Factorial Exact       " << factorial << endl << endl 
		<< "Stirling's Formula            " << stirlingFormula 
		<< endl << endl << "Difference                    " << setw(13) << diffrence << endl;

	cin.get();

		return 0;
}
	