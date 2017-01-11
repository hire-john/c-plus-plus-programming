/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:2/26/2011
Chapter 6 Programming Exercises Question 3
Program Description:
This program reads song length values in seconds from a file called songs.dat. It then converts the seconds into minutes & seconds, displays a song number
and total time values in a table. Requires songs.dat to execute.
*/

#include <iostream> // input output
#include <fstream> // to read songs.dat
#include <string> // for string
#include <iomanip> // setfill and setw

using namespace std;

int main() {
	// set the program variables 
	
	ifstream songFile;
	const int totalTime=4800;
	int initialSeconds, songSeconds, songMinutes, secondsRemain, minutesRemain; // use implied type coercion
	int songNumber=0;
	int totalSeconds=0;
	int totalMinutes=0;
	int totalRemain;
	
	// open the file containing the listing of seconds

	songFile.open("songs.dat");
	
	// make sure the file opened

	if(!songFile){
		cout << "Error opening file: press enter to kill program";
		cin.get(); 
		return 1; // kill
	}
	
	// create table header for display layout
	cout << "Song Number    " << "   Song Time      " << "    Total Time     " << endl;
	cout << "---------------" << "   ---------------" << "    ---------------" << endl;
	cout << "#              " << "   MINUTES:SECONDS" << "    MINUTES:SECONDS" << endl;
	cout << "---------------" << "   ---------------" << "    ---------------" << endl;
	
	// begin end of file loop

	songFile >> initialSeconds; // prime the loop
	while(songFile) {
	songNumber++;	// create a song number counter
	songMinutes=(initialSeconds / 60); // calculate each song's minutes
	songSeconds=(initialSeconds % 60); // calculate each song's seconds
	totalMinutes=totalMinutes+songMinutes; // create a counter for the total minutes
	totalSeconds=totalSeconds+songSeconds; // create a counter for the total seconds
	

	// perform conditional to check if total seconds is over 60 to perform modulus arithmetic

	if (totalSeconds > 60){
		totalMinutes=totalMinutes+((totalSeconds-(totalSeconds % 60))/60);
		totalSeconds=(totalSeconds % 60);
	}
	// display results
	cout << songNumber << "\t\t\t" << songMinutes << ":" << setfill('0') << setw(2) << songSeconds << "\t\t   " << totalMinutes << ":" << setfill('0') << setw(2) << totalSeconds << endl; // output results... had to lookup setfill for leading 0 to use time format
	songFile >> initialSeconds; // move marker to next value and store in memory
	}
	// end loop

	// calculate total time remaining on disc

	totalRemain = totalTime - ( (totalMinutes * 60) + totalSeconds);
	minutesRemain = totalRemain / 60;
	secondsRemain = totalRemain % 60;

	// output remaining time

	cout << endl << "There is: " << minutesRemain << " minutes " << setfill('0') << setw(2) << secondsRemain << " seconds remaining on the disc";

	songFile.close(); // close song file
	cin.get(); // pause to allow time to view results
	return 0; // tell os everything went as planned
}
