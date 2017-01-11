/* 
Student: John McDonnell
Date:4/30/2011
Final Exam
Program Description:
Create a modular version of the car loan program from the mid-term.
*/

class carLoan
{
public:
	carLoan(); // constructor 
	float getPrice(); // gets price input from user - STEP ONE
	float getInterestRate(); // gets interest rate from user - STEP FOUR
	float getDownPayment(); // gets down payment from user - STEP THREE
	float getTradeIn(); // gets trade in from user - STEP TWO
	float calcMonPayment(); // calculates the monthly payment schedule for current instance - STEP FIVE
	void displayLoanSchedule(); // displays loan schedule and info - STEP SIX
private:
	float price; // vehicle price 
	float downPayment; // down payment amount
	float tradeIn; // trade-in value
	float loanAmt; // price - downPayment - tradeIn
	float annualIntRate; // decimal interest rate from user
	float annualIntPercent; // percent interest rate for display
	float monIntRate; // stores monthly interest rate
	int noMonths; // noMonths for calcMonPayment expression, not needed here since only one method uses this variable... defined it so you know its here because the specs asked for it to be
	float monPayment; // stores calcMonPayment expression
	float monthlyPaymentPrice[4]; // stores monthly schedule for 4 years
};