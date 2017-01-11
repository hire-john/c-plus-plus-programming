/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:4/10/2011
Chapter 10 Programming Exercises Question 3
Program Description:
This program is suppose to use a user defined data type and output values that correspond to an input range.
*/

#include <iostream> // input output
#include <string> // strings

using namespace std; // using c++ standard identifiers

enum GeologicPeriods { // create a geologic period data type because exercise requires it 
	PRECAMBRIAN = 4500, 
	CAMBRIAN = 570, 
	ORDOVICIAN = 500, 
	SILURIAN = 435, 
	DEVONIAN = 395, 
	CARBONIFEROUS = 345, 
	PERMIAN = 280, 
	TRIASSIC = 225, 
	JURASSIC = 192, 
	CRETACEOUS = 136, 
	PALEOGENE = 65, 
	NEOGENE = 23
};

void matchPeriods(long int startRange, long int endRange); // function prototype 

int main() // main!
{
	long int startRange, endRange; // declare integers for range input values
	
	// create a loop based on cin state that accepts continuous range input values
	// so student can check over and over to determine the start of a period

	do
	{
		cout << "Please enter start of range: (millions of years) " << endl;
		cin >> startRange;
		cout << "Please enter End of Range: (millions of years)" << endl;
		cin >> endRange;

		if (startRange > endRange){
			cout << "Start must not exceed end!" << endl;
		}else{
		
		cout << "Geologic Periods in this Range:" << endl;
		matchPeriods(startRange, endRange); // call function 
		cout << endl;
			
		}
	}
	while(cin);
}

void matchPeriods(long int startRange, long int endRange)
{
	cout << "Determining Ranges..." << endl; // for longer loops
	while (startRange <= endRange){ // loop that increments starting value and checks for matches as it increments
	
	switch (startRange) { // when a match is found output the appropriate period
	case PRECAMBRIAN: cout << "Precambrian" << endl;
		break;
	case CAMBRIAN: cout << "Cambrian" << endl;
		break;
	case ORDOVICIAN: cout << "Ordovician" << endl;
		break;
	case SILURIAN: cout << "Silurian" << endl;
		break;
	case DEVONIAN: cout << "Devonian" << endl;
		break;
	case CARBONIFEROUS: cout << "Carboniferous" << endl;
		break;
	case PERMIAN: cout << "Permian" << endl;
		break; 
	case TRIASSIC: cout << "Triassic" << endl;
		break;
	case JURASSIC: cout << "Jurassic" << endl;
		break;
	case CRETACEOUS: cout << "Cretaceous" << endl;
		break;
	case PALEOGENE: cout << "Paleogene" << endl; 
		break;
	case NEOGENE: cout << "Neogene" << endl;
		break;
	} // end switch


	startRange++; // i!

	} // end while loop

	
}