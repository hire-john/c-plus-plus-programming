//------------------------------------------//
// Programming and Problem Solving with C++ //
// Chapter 6. Programming Problem 3.        //
// Solution originally written by: Philip King         //
// Modified extensively by Ken Adcock
//------------------------------------------//

//--------------------------------------------------------------------------//
// This program assists in CD playlist compilation.                         //
//--------------------------------------------------------------------------//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//-----------------------//
// Main Function         //
// Inputs: None          //
// Outputs: Integer zero //
//-----------------------//
int main()
{
  ifstream inFile;      // The input file stream
  ofstream outFile ;    // The output file stream
  // output is written to cout as well as outFile
  int songNumber;       // The song number number
  int minutes = 0;          // The number or full minutes the song plays
  int seconds;          // The number of seconds the track plays (after the
                        // minutes in the previous variable
  int totalSeconds=0;   // The total length of all the songs in seconds
  int availSeconds = 4800;  // total available time on CD
  int remMin = 0;
  int remSec = 0 ;

  // Set up the I/O stream
  // I setup data files on f drive, this is upto you where you place the file
  outFile.open("f:report.dat") ;
  inFile.open("f:songs.dat");
  if(!inFile)     // test for presence of input file
  {
	  cout << "Input file not found.  Job will terminate. " << endl ;
	  return 1 ;
  }
  // probably need to edit for file not found


  // Print table headings
  cout << setw(10) << "Song "  << setw(20) << "Song Time   " << setw(20)
       << "Total Time    "     << endl;
  cout << setw(10) << "Number" << setw(20) << "Minutes   Seconds" 
       << setw(20) << "Minutes   Seconds"  << endl;
  cout << setw(10) << "------" << setw(20) << "-------   -------" 
       << setw(20) << "-------   -------"  << endl;

  // output to file

outFile << setw(10) << "Song "  << setw(20) << "Song Time   " << setw(20)
       << "Total Time    "     << endl;
  outFile << setw(10) << "Number" << setw(20) << "Minutes   Seconds" 
       << setw(20) << "Minutes   Seconds"  << endl;
  outFile << setw(10) << "------" << setw(20) << "-------   -------" 
       << setw(20) << "-------   -------"  << endl;

//  Reads the first record (data item)
  inFile >> seconds;
  songNumber = 1 ;
 
// check for end-of-file or bad data 
  while (inFile)
  {
    
   
    // Skip if bad information
    if ( seconds < 0)
    {
      cout << "   Second data field is not positive...skipping entry!" << endl;
    }
    else
    {  

      // Generate the total amount of time and the next table row

      totalSeconds = totalSeconds + seconds;
	  minutes = seconds /60 ;
	  if (seconds > 60)
	  seconds = seconds %  60 ;

      cout << setw(8) << songNumber << "  " << setw(7) << minutes 
           << "   " << setw(7) << seconds <<  "   "
           << setw(7) << totalSeconds/60 << "   " << setw(7)
           << totalSeconds%60 << endl;

	  outFile << setw(8) << songNumber << "  " << setw(7) << minutes 
           << "   " << setw(7) << seconds <<  "   "
           << setw(7) << totalSeconds/60 << "   " << setw(7)
           << totalSeconds%60 << endl;
    }

    // Get the next set of values from the file

    inFile >> seconds;
	songNumber = songNumber + 1 ;
	minutes = 0 ;

  }
  availSeconds = availSeconds - totalSeconds ;
  remMin = availSeconds / 60 ;
  remSec = availSeconds % 60;

  // Print out the remaining time
  cout << "   There are " << remMin 
       << " minutes and " << remSec 
       << " seconds of tape left."
       << endl << endl;

  outFile << "   There are " << remMin 
       << " minutes and " << remSec 
       << " seconds of tape left."
       << endl << endl;

// close files
  inFile.close();
  outFile.close() ;
  cin.get() ;
  cin.get() ;
  return 0;
}
