// Chapter 9  Exercise 3 Page 448
// Programming and Problem Solving with C++
// CIS 1610   
// Ken R. Adcock
// Programming and Problem Solving with C++ 5th Edition Dale and Weems
//

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;


float calcBoardFeet ( int, int, int, int );
float calcCost (char, float) ;
void displayResults (int, int, int, int, char, float) ;
void editSpecies (char& ) ;

int main()
{

char species ;
int noPieces, width, height, length ;
float boardFeet, cost, totalCost ;
totalCost = 0.0 ;

cout << "Enter species, number of pieces, width, thickness, and length: " << endl << endl;
cout << "Enter item: " ;
cin >> species  ;
editSpecies(species);
while ( species != 'T')
{
			
		
		cin >> noPieces >> width >> height >> length ;
		boardFeet = calcBoardFeet(noPieces, width, height, length ) ;
		cost = calcCost (species, boardFeet );
		displayResults(noPieces, width, height, length, species, cost);
		totalCost =  totalCost + cost ;

		cout << "Enter item: " ;
		cin >> species ;
		editSpecies(species);
}

cout << "Total cost: $" << totalCost << endl ;

cin.get() ;
cin.get() ;

return 0 ;
}

float calcBoardFeet (int noPieces, int width, int height, int length )
{
	float bf ;
	bf = float (width * height * length ) /12.0  * noPieces ;

	return bf ;
}

float calcCost (char species, float bf )
{
	float price ;
// It is not necessary to check for both uppercase and lowecase values here as
// I have already converted species to uppercase.  
	if (species == 'P')
		price = bf * 0.89 ;
	else
		if (species == 'F' )
			price = bf * 1.09 ;
		else
			if(species == 'C' )
				price = bf * 2.26;
			else
				if (species == 'M' )
					price  = bf * 4.50 ;
				else price = bf * 3.10 ;
	return price;
}
void displayResults (int pieces, int width, int thickness, int length, char species, float cost )
{
 string specDesc ;
	if (species == 'P')
		specDesc =    "Pine,  " ;
	else
		if (species == 'F' )
			specDesc = "Fir,   " ;
		else
			if(species == 'C' )
				specDesc = "Cedar, ";
			else
				if (species == 'M' )
					specDesc = "Maple, " ;
				else specDesc = "Oak,   " ;
   cout << showpoint << fixed ;
   cout << pieces <<" " << width << "X" <<thickness << "X" << length << " " << specDesc << "cost: $" << setprecision(2) <<cost << endl;
   return ;
}
void editSpecies (char& sp )
{
	bool ok ;

	ok = false; 
	// make sure character is uppercase
	
		while ( !ok )

		{
			sp = toupper(sp) ;    // make species uppercase
			if (sp == 'P' || sp == 'F' || sp == 'C' || sp == 'M' || sp == 'O' || sp == 'T')
				ok = true;
			else 
			{
				cout << "Species code must be P, F, C, M, O, or T.  Try again. " << endl ;
				cout << "Enter item: " ;
				cin >> sp ;
			}
		}

				

	return  ;
}