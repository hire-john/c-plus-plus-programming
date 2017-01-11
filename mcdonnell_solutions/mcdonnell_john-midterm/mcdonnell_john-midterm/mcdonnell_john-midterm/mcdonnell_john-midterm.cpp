/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:3/18/2011
Midterm
Program Description:
This Program receives user input in the form of a Vehicle Price, Interest Rate, Down Payment, Trade in value, 
and From these, a monthly car payment is calculated.
*/

#include <iostream> // cin cout
#include <iomanip> // setw fixed
#include <cmath> // pow

using namespace std;

int main()
{
	// declare variables for user input
	float price, downPayment, tradeIn, loanAmt, annualIntRate, annualIntPercent, monIntRate, monPayment; 
	int noMonths; 
	
	// prompt user for vehicle price input
	cout << "PLEASE ENTER A VEHICLE PRICE BETWEEN $50 AND $50,000 (no $):";
	cin >> price;
	
	if(cin){ // check input state
	
	// check to ensure price meets the contraints in the design document - if not echo error & prompt for correction
	while(price <= 50 || price >= 50000) // use a loop to determine if the price input is between 50 and 50000
	{
		if(price <=50){
		cout << price << " IS BELOW THE MINIMUM FINANCE REQUIREMENT!" << endl;
		cout << "PLEASE RE-ENTER A NEW AMOUNT: " << endl;
		cin >> price;
		}
		else if(price >= 50000){
		cout << price << " EXCEEDS THE MAXIMUM FINANCE REQUIREMENT" << endl;
		cout << "PLEASE RE-ENTER A NEW AMOUNT: " << endl;
		cin >> price;
		}
	} // end price while loop
	}else{
		cout << "INPUT FAILURE!";
		return 1;
	} // end price cin check


	// echo print the users price input
	cout << "------------------------------------------------------------------" << endl;
	cout << "VEHICLE PRICE ENTERED: " << price << endl;
	cout << "------------------------------------------------------------------" << endl;

	// prompt user for trade in value
	cout << "PLEASE ENTER A TRADE IN VALUE BETWEEN 0 AND " << price << " (no $):";
	cin >> tradeIn;

	if(cin){
	// check to ensure trade in meets the constraints in the design document - if not echo error & prompt for correction
	while(tradeIn < 0 || tradeIn > price)
	{
		if(tradeIn > price){
		cout << "TRADE IN VALUE CAN'T EXCEED VEHICLE PRICE" << endl;
		cout << "PLEASE RE-ENTER A TRADE IN VALUE BETWEEN 0 AND " << price << " (no $):";
		cin >> tradeIn;
		}
		else if(tradeIn < 0){
		cout << "TRADE IN VALUE CAN'T BE A NEGATIVE VALUE!" << endl;
		cout << "PLEASE RE-ENTER A TRADE IN VALUE BETWEEN 0 AND " << price << " (no $):" << endl;
		cin >> tradeIn;
		}
	} // end trade in while loop
	}else{
		cout << "INPUT FAILURE!";
		return 1;
	} // end trade in cin check
	
	// echo print price and trade in for reference
	cout << "------------------------------------------------------------------" << endl;
	cout << "VEHICLE PRICE ENTERED: " << price << endl;
	cout << "TRADE IN VALUE ENTERED: " << tradeIn << endl;
	cout << "------------------------------------------------------------------" << endl;

	// prompt user for down payment value
	cout << "PLEASE ENTER A DOWN PAYMENT BETWEEN 0 AND " << (price-tradeIn) << " (no $):";
	cin >> downPayment;


	if(cin){
	// check to ensure down payment meets the contraints in the design document - if not echo error & prompt for correction
	while(downPayment < 0 || downPayment > (price-tradeIn))
	{
		if(downPayment < 0){
		cout << "DOWN PAYMENT CAN'T BE NEGATIVE" << endl;
		cout << "PLEASE RE-ENTER DOWNPAYMENT:" << endl;
		cin >> downPayment;
		}
		else if(downPayment > (price-tradeIn)){
		cout << "NO FINANCING NEEDED. DOWN PAYMENT EXCEEDS VEHICLE PRICE!" << endl;
		cout << "PLEASE RE-ENTER A DOWN PAYMENT VALUE BETWEEN 0 AND " << (price-tradeIn) << " (no $):" << endl;
		cin >> downPayment;
		}
	} // end down payment while loop
	}else{
		cout << "INPUT FAILURE!";
		return 1;
	} // end down payment cin check

	// echo print price and trade in for reference
	cout << "------------------------------------------------------------------" << endl;
	cout << "VEHICLE PRICE ENTERED: " << price << endl;
	cout << "TRADE IN VALUE ENTERED: " << tradeIn << endl;
	cout << "DOWN PAYMENT ENTERED: " << downPayment << endl;
	cout << "------------------------------------------------------------------" << endl;

	// prompt user for decimal interest rate value
	cout << "PLEASE ENTER AN ANNUAL INTEREST RATE (DECIMAL FORM) BETWEEN 0 AND 0.5:";
	cin >> annualIntRate;

	if(cin){
	// check to ensure APR meets the contraints in the design document - if not echo error & prompt for correction
	while(annualIntRate < 0 || annualIntRate > 0.5)
	{
		if(annualIntRate < 0){
		cout << "ANNUAL INTEREST RATE CAN'T BE NEGATIVE!" << endl;
		cout << "PLEASE RE-ENTER ANNUAL INTEREST RATE:" << endl;
		cin >> annualIntRate;
		}
		else if(annualIntRate > 0.5){
		cout << "ANNUAL INTEREST RATE EXCEEDS MAXIMUM ALLOWABLE!" << endl;
		cout << "PLEASE RE-ENTER AN ANNUAL INTEREST RATE BETWEEN 0 AND 0.5" << endl;
		cin >> annualIntRate;
		}
	} // end apr while loop
	}else{
		cout << "INPUT FAILURE!";
		return 1;
	} // end apr cin check

	// perform monthly payment calculation

	monIntRate = (annualIntRate / 12.0); // determine monthly interest rate
	annualIntPercent = (annualIntRate * 100.00); // convert decimal interest rate
	loanAmt = (price-downPayment-tradeIn); // determine principal loan amount
	noMonths=12; // set the base number of months for the for loop
	cout << endl; // spacer
	cout << "MONTHLY PAYMENTS WITH A " << annualIntPercent << "% APR: " << endl;
	cout << endl; // spacer
	cout << "Months" << "		" << "Monthly Payments" << endl; // table header
	cout << "------" << "		" << "----------------" << endl; // seperator
	
	// create a for loop that increments noMonths by 12, displays noMonths and displays monthly payment based on calculation
	// in monPayment variable and display all results as table
	
	for(int i=24; i<=60; i=i+12){ 
	noMonths=noMonths+12;
	monPayment= (loanAmt * monIntRate) / (1.00 - pow(1+monIntRate,(-1*noMonths)));
	cout << fixed << setprecision(2) << noMonths << "		" << monPayment << endl;
	}
	
	// display exit text
	cout << endl; // spacer
	cout << "PRESS ENTER TO EXIT...";

	// display error for user who enters wrong data type at any point during program
	if (!cin)
		cout << "Invalid Input"; // user entered invalid data type

	cin.get(); // one for return character
	cin.get(); // one to quit
	
	return 0;
}