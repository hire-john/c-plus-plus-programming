/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:2/12/2011
Chapter/Assignment Section/Problem: 4/Programming Problems/4
Program Description:
This program prompts a user to input temperature values. When applicable, the difference between these input values is computed. The program will then
open and write the users input values and the difference to a file named tempdata.dat. 
*/

#include <iostream> // cout and cin
#include <fstream> // ofstream
#include <iomanip> // setprecision
#include <string> // strings!!!

using namespace std;

int main() {

	// declare variables for user prompt strings

	string initialInputPrompt = "Please enter a temperature (in floating point form: 98.6 degress):\n";
	string nextInputPrompt = "\nPlease enter another temperature:\n";
	string tempId = " Temperature Entered: ";
	string differenceId=" The Difference Between";
	
	// declare a variable for the output temp file

	string tempfile ="tempfile.dat";
	
	float temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12; // declare variables for temperatures
	float tempDif1, tempDif2, tempDif3, tempDif4, tempDif5, tempDif6, tempDif7, tempDif8, tempDif9, tempDif10, tempDif11; // declare variables for the difference
	
	ofstream outData(tempfile.c_str()); // initiate the output file function & convert the filename to required c-style string argument
	
	// set data manipulators

	cout << showpoint << setprecision(4);

	// obtain data input from user and store to variables - should use loops to iterate through this & conditionals/functions for verifying data types
	// But I'll stick to learning through repetition

	// get temperature 1

	cout << initialInputPrompt;
	cin >> temp1;
	
	// get temperature 2

	cout << nextInputPrompt;
	cin >> temp2;
	
	// get temperature 3

	cout << nextInputPrompt;
	cin >> temp3;
	
	// get temperature 4

	cout << nextInputPrompt;
	cin >> temp4;

	// get temperature 5
	
	cout << nextInputPrompt;
	cin >> temp5;

	// get temperature 6

	cout << nextInputPrompt;
	cin >> temp6;

	// get temperature 7
	
	cout << nextInputPrompt;
	cin >> temp7;

	// get temperature 8

	cout << nextInputPrompt;
	cin >> temp8;

	// get temperature 9
	
	cout << nextInputPrompt;
	cin >> temp9;

	// get temperature 10

	cout << nextInputPrompt;
	cin >> temp10;

	// get temperature 11

	cout << nextInputPrompt;
	cin >> temp11;

	// get temperature 12
	
	cout << nextInputPrompt;
	cin >> temp12;

	// calculate the difference between the temperatures

	cout << "\nCalculating the Difference...\n";
	
	tempDif1=temp1-temp2;
	tempDif2=temp2-temp3;
	tempDif3=temp3-temp4;
	tempDif4=temp4-temp5;
	tempDif5=temp5-temp6;
	tempDif6=temp6-temp7;
	tempDif7=temp7-temp8;
	tempDif8=temp8-temp9;
	tempDif9=temp9-temp10;
	tempDif10=temp10-temp11;
	tempDif11=temp11-temp12;

	// write results to temp file

	cout << "Writing to file...\n";

	outData << "#1" << tempId << temp1 << endl;
	outData << "#2" << tempId << temp2 << endl << differenceId+" #1 & #2: " << tempDif1 << endl;
	outData << "#3" << tempId << temp3 << endl << differenceId+" #2 & #3: " << tempDif2 << endl;
	outData << "#4" << tempId << temp4 << endl << differenceId+" #3 & #4: " << tempDif3 << endl;
	outData << "#5" << tempId << temp5 << endl << differenceId+" #4 & #5: " << tempDif4 << endl;
	outData << "#6" << tempId << temp6 << endl << differenceId+" #5 & #6: " << tempDif5 << endl;
	outData << "#7" << tempId << temp7 << endl << differenceId+" #6 & #7: " << tempDif6 << endl;
	outData << "#8" << tempId << temp8 << endl << differenceId+" #7 & #8: " << tempDif7 << endl;
	outData << "#9" << tempId << temp9 << endl << differenceId+" #8 & #9: " << tempDif8 << endl;
	outData << "#10" << tempId << temp10 << endl << differenceId+" #9 & #10: " << tempDif9 << endl;
    outData << "#11" << tempId << temp11 << endl << differenceId+" #10 & #11: " << tempDif10 << endl;
	outData << "#12" << tempId << temp12 << endl << differenceId+" #11 & #12: " << tempDif11 << endl;
	
	cout << "\nOPERATIONS SUCCESSFUL! HIT ENTER TO EXIT.\n";

	cin.get(); // read marker has queued the previous input's return character.
	cin.get(); // halt and await user to press enter key

	return 0;
}
