/* 
Student: John McDonnell
Date:4/30/2011
Final Exam
Program Description:
Create a modular version of the car loan program from the mid-term.
*/

#include "carLoan.h";
#ifndef IOSTREAM // for cout and cin
#include <iostream>
#define IOSTREAM
#endif

#ifndef IOMANIP // for fixed and setprecision
#include <iomanip>
#define IOMANIP
#endif

using namespace std;

// constuctor

carLoan::carLoan()
{
// do nothing
// start new car loan instance
}


float carLoan::getPrice()
{
	int cinCount=0; // set a loop count that will transfer control to error detection conditionals if it gets set to anything greater than 0

	do
	{
		if(cinCount > 0)
		{
		
			if(price <= 50.00)
			{
			cout << "PRICE CAN'T BE BELOW $50.00" << endl;
			cout << "PLEASE RE-ENTER PRICE: ";
			cin >> price;
			if(!cin){return 1;}
			}
			else if(price >= 50000.00)
			{
			cout << "PRICE CAN'T EXCEED $50,000!" << endl;
			cout << "PLEASE RE-ENTER PRICE: ";
			cin >> price;
			if(!cin){return 1;}

			}
		}
		else
		{
		cout << "VEHICLE PRICE: ";
		cin >> price;
		if(!cin){return 1;}
		cinCount++;
		}
	}
	while(price <= 50.00 || price >= 50000.00);
	price = float(price);
	return price;
}

float carLoan::getTradeIn()
{
	int cinCount=0; // set a loop count that will transfer control to error detection conditionals if it gets set to anything greater than 0

	do
	{
		if(cinCount > 0) // this conditional branch occurs in numerous methods through this class, only going to comment this one
		{				 // if cinCount is greater than 0 determine which condition the user is not meeting and display the appropriate error
		
			if(tradeIn < 0)
			{
			cout << "TRADE-IN CAN'T BE NEGATIVE!" << endl;
			cout << "PLEASE RE-ENTER TRADE-IN: ";
			cin >> tradeIn;
			if(!cin){return 1;}
			}
			else if(tradeIn > price)
			{
			cout << "TRADE-IN CAN'T EXCEED VEHICLE PRICE!" << endl;
			cout << "PLEASE RE-ENTER TRADE-IN: ";
			cin >> tradeIn;
			if(!cin){return 1;}

			}
		}
		else // if they don't trigger an error they exit the loop and set the variable value
		{
		cout << "TRADE-IN VALUE: ";
		cin >> tradeIn;
		if(!cin){return 1;}
		cinCount++;
		}
	}
	while(tradeIn < 0 || tradeIn > price); // loop cin until conditions are met
	tradeIn = float(tradeIn); // implying type here for readers
	return tradeIn; // send value back to main so user can use in variable if desired IE variable=loan.getTradeIn();
}


// same as above except variable is different

float carLoan::getDownPayment()
{
	int cinCount=0; // set a loop count that will transfer control to error detection conditionals if it gets set to anything greater than 0

	do
	{
		if(cinCount > 0)
		{
		
			if(downPayment < 0)
			{
			cout << "DOWN PAYMENT CAN'T BE NEGATIVE!" << endl;
			cout << "PLEASE RE-ENTER DOWN PAYMENT: ";
			cin >> downPayment;
			if(!cin){return 1;}
			}
			else if(downPayment > (price-tradeIn))
			{
			cout << "DOWN PAYMENT CAN'T EXCEED PRINCIPAL!" << endl;
			cout << "PLEASE RE-ENTER DOWN PAYMENT: ";
			cin >> downPayment;
			if(!cin){return 1;}

			}
		}
		else
		{
		cout << "DOWN PAYMENT AMOUNT: ";
		cin >> downPayment;
		if(!cin){return 1;}
		cinCount++;
		}
	}
	while(downPayment < 0 || downPayment > (price-tradeIn));
	downPayment = float(downPayment);
	return downPayment;
}

// same as above except variable is different

float carLoan::getInterestRate()
{
	int cinCount=0; // set a loop count that will transfer control to error detection conditionals if it gets set to anything greater than 0

	do
	{
		if(cinCount > 0)
		{
		
			if(annualIntRate < 0)
			{
			cout << "ANNUAL INTEREST RATE CAN'T BE NEGATIVE!" << endl;
			cout << "PLEASE RE-ENTER INTEREST RATE: ";
			cin >> annualIntRate;
			
			if(!cin){return 1;}
			
			}
			else if(annualIntRate > 0.5)
			{
			cout << "ANNUAL INTEREST RATE CAN'T BE HIGHER THAN 50%!" << endl;
			cout << "PLEASE RE-ENTER INTEREST RATE: ";
			cin >> annualIntRate;
			
			if(!cin){return 1;}

			}
		}
		else
		{
		cout << "DECIMAL INTEREST RATE: ";
		cin >> annualIntRate;
		if(!cin){return 1;}
		cinCount++;
		}
	}
	while(annualIntRate < 0 || annualIntRate > 0.5);
	annualIntRate=float(annualIntRate);
	return annualIntRate;
}

// DIFFERENT! 

float carLoan::calcMonPayment()
{
	loanAmt = price - downPayment - tradeIn; // calculate loan principal
	
	monIntRate = (annualIntRate / 12.0); // determine monthly interest rate

	int noMonths=12; // no months

	int currentArrayElement = 0; // counter used to loop through array and store payment values

	for(int i=24; i<=60; i=i+12){  // loop used calculate and store schedule payments in array
	noMonths=noMonths+12;
	monPayment=(loanAmt * monIntRate) / (1.00 - pow(1+monIntRate,(-1*noMonths)));
	monthlyPaymentPrice[currentArrayElement]=monPayment; // store monthly payment result in current array element
	currentArrayElement++; // increment to next array element
	}

	return 0; // i worked
}

void carLoan::displayLoanSchedule()
{
	int currentArrayElement = 0; // set for array loop through
	int currentMonth = 12; // used for months display on schedule
	annualIntPercent = (annualIntRate * 100.00); // calculate annual interest percent for display
	cout << endl;
	cout << endl;
	cout << fixed << setprecision(2); // set iomanips
	cout << "HONEST DAVES LOAN CALCULATOR " << endl;
	cout << "************************************" << endl;
	cout << "VEHICLE PRICE:		" << "$" << price << endl;
	cout << "TRADE-IN VALUE:		" << "$" << tradeIn << endl;
	cout << "DOWN PAYMENT:		" << "$" << downPayment << endl;
	cout << "------------------------------------" << endl;
	cout << "LOAN AMOUNT:		" << "$" << loanAmt << endl;
	cout << "ANNUAL INTEREST RATE:	" << annualIntPercent << "%" << endl;
	cout << endl;
	cout << "LOAN SCHEDULE " << endl;
	cout << "************************************" << endl;
	for(int i=0; i<4; i++) // loop through array and print array contents while doing so
	{
	cout << currentMonth << " MONTHS		";
	cout << "$" << monthlyPaymentPrice[currentArrayElement] << endl;
	currentArrayElement++;
	currentMonth=currentMonth+12;
	}
}