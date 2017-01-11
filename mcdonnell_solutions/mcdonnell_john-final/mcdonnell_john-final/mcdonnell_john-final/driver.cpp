/* 
Student: John McDonnell
Date:4/30/2011
Final Exam
Program Description:
Create a modular version of the car loan program from the mid-term.
*/
#include <iostream>
#include "carLoan.h"

using namespace std;

int main()
{
	// down payment, price and interest rate methods can be invoked in any order
	carLoan loanOne; // start a new loan
	loanOne.getPrice(); // input price 
	loanOne.getTradeIn(); // input trade in value
	loanOne.getDownPayment(); // input down payment 
	loanOne.getInterestRate(); // input interest rate
	loanOne.calcMonPayment(); // calculate payment
	loanOne.displayLoanSchedule(); // display results
	cin.get(); // absorb last character in stream
	cin.get(); // exit
	return 0;
}