/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/3/2011
Chapter 9 Programming Exercises Question 3
Program Description:
inputs lumber product quantites and computes cost of lumber and order total
*/

#include <iostream> // input and output
#include <string> // for string!
#include <iomanip> // setpreicsion etc

using namespace std; // use standard names

float lumberCost(float price, int qty, int w, int h, int l); // lumberCost prototype
int countLength(float floatToCount); // integer length prototype

int main() 
{
	string lumberName; 
	char productLetter;
	int quantity, width, height, length, precisionLength;
	float lumberPrice, lumberCostValue;
	float total=0.00;

	do {
	cout << "Enter Item:";
	
	cin >> productLetter; // prompt user for product letter

	if(productLetter=='t' || productLetter=='T'){ // check to make sure user's not asking for total
	break; // if so break the loop and display total - if nothing entered total will be 0
	}

	else
	{
	cin >> quantity >> width >> height >> length; // continue with input

	if(isalpha(productLetter)) // ensure character is a alpha
	{
		productLetter=toupper(productLetter); // convert to uppercase for switch
		
		switch(productLetter) // assign price and name to lumber based on input
		{
		default:lumberPrice=0;
			break;
		case 'P':{
			lumberPrice=0.89;
			lumberName="Pine";
				 }
			break;
		case 'F':{
			lumberPrice=1.09;
			lumberName="Fir";
				 }
			break;
		case 'C':{
			lumberPrice=2.26;
			lumberName="Cedar";
				 }
			break;
		case 'M':{
			lumberPrice=4.50;
			lumberName="Maple";
				 }
			break;
		case 'O':{
			lumberPrice=3.10;
			lumberName="Oak";
				 }
			break;
		}

		if(lumberPrice != 0) { // if a match was made call function and output results

		lumberCostValue=lumberCost(lumberPrice, quantity, width, height, length); // call lumberCost
		precisionLength=countLength(lumberCostValue); // determine precision length
		cout << quantity << " " << width << "x" << height << "x" << length << " " << lumberName << ", cost: $"; // output results
		cout << setprecision(precisionLength) << showpoint << lumberCostValue << endl; // output results
		
		}
		else{ // handle error for all productLetter characters exlucding those in switch statement
			cout << "Invalid product code" << endl;
		} // end lumber price code conditional

		
	}else{ // handle error for non alpha productLetter charcters
		cout << "Invalid product code" << endl;
	} // end is alpha conditional


	// keep a running tally of lumberCost for total price

	total = total + lumberCostValue;

	} // end cin conditional		

	} while(cin); // continue asking for line items while input is alive and well
	

	precisionLength=countLength(total); // count the length of total to dynamically determine the precision length
	
	cout << setprecision(precisionLength) << "Total Cost: $" << total;

	// let user see results 

	cin.get();
	cin.get();

	return 0;
}

// value returning function to calculate lumber cost

float lumberCost(float price, int qty, int w, int h, int l)
{
	float cost;
	cost = (((w*h)*(l*12.00) / 144.00 )) * qty * price;
	return cost;
}


// value return function to count length of float value and return as integer

int countLength(float floatToCount){
int counter;
if(floatToCount < 10)
	counter=1;
else{
	counter = 3;
while(floatToCount > 10)
	{
		floatToCount = floatToCount / 10;
		counter++;
	}
}
return counter;
}
