//  Chapter 10 Exercise 3
//  CIS 1610  Page 494
//  Dale * Weems, Programming in C++ 5th Edition
//  Programmed by Ken Adcock
//
//  Location	Name     Year range in millions
//    0			Neogene        23 - 64
//    1			Paleogene      65 - 135
//    2			Cretaceous    136 - 191
//    3			Jurassic      192 - 224
//    4			Triassic      225 - 279
//    5			Permian       280 - 344
//    6			Carboniferous 345 - 394
//    7			Devonian      395 - 434
//    8			Silurian      435 - 499
//    9			Ordovician    500 - 569
//   10			Cambrian      570 - 4499
//   11			Precambrian   4500 or earlier
//


#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// function prototypes
int detPeriod( int) ;
void disPlayPeriods (int, int) ;

int main()
{
	
	string periodName ;
	int begPeriod, endPeriod ;
	int begDate, endDate ;
	
	bool dataOk ;
	bool keepOn = true ;
	char response ;
	
	do  // main input loop
	{

	// prompt for input
	cout << "Enter a range of prehistoric dates (beginning and ending ) in millions of years " << endl ;
	cout << "The dates should be separated by a space " << endl ;
	cout << "For example entering a range of (25 138) would result in an output of (Paleogene, Credaceous)" << endl ;
	cout << "Note that the left and right paren in the above example are not entered. " << endl ;
	cout << endl;

	// input data
	dataOk = false ;
	do
	{
	cin >> begDate >> endDate ;
	if (begDate >= 23 && (begDate <= endDate))
		dataOk = true ;
	else
		cout << "Error in dates, please try again " << endl ;
	}
	while(!dataOk) ;

	begPeriod = detPeriod(begDate) ;    
	endPeriod = detPeriod(endDate) ;

	disPlayPeriods ( begPeriod, endPeriod) ;





	cout << "Enter another period range (Y/N)? " ;
	cin >> response ;
	response = toupper(response) ;
	if(response != 'Y')
		keepOn = false;

	}
	while(keepOn) ;

	cin.get() ;
	cin.get() ;

	return 0 ;
}


	int detPeriod (int gTime)
	{
		int iPer;
		if (gTime >= 23 && gTime <65)
			iPer = 0 ;
		else
			if(gTime >= 65 && gTime <136)
				iPer = 1;
			else
				if(gTime >= 136 && gTime < 192)
					iPer = 2;
				else
					if(gTime >= 192 && gTime < 225)
						iPer = 3;
					else
						if(gTime >= 225 && gTime < 280)
							iPer = 4;
						else
							if(gTime >= 280 && gTime < 345)
								iPer = 5;
							else
								if(gTime >= 345 && gTime < 395)
									iPer = 6;
								else
									if(gTime >= 395 && gTime <435)
										iPer = 7;
									else
										if(gTime >= 435 && gTime < 500)
											iPer = 8;
										else
											if(gTime >= 500 && gTime < 570)
												iPer = 9;
											else
												if(gTime >= 570 && gTime <4500)
													iPer = 10;
												else
													iPer = 11;

	return iPer ;
	}


	void disPlayPeriods (int begPeriod, int endPeriod)
	{
		enum Period {NEOGENE, PALEOGENE, CRETACEOUS, JURASSIC, TRIASSIC, PERMIAN, CARBONIFEROUS, DEVONIAN, SILURIAN, ORDOVICIAN, CAMBRIAN, PRECAMBRIAN};

		Period period ;

		int iPer ;

		for(iPer = begPeriod; iPer <= endPeriod; iPer++)
		{
			

			switch( iPer)
			{
			case 0:
				period = NEOGENE ;
				break;
			case 1 :
				period = PALEOGENE;
				
				break ;
			case 2 :
				period = CRETACEOUS;
				
				break ;
			case 3:
				period = JURASSIC ;
				
				break ;
			case 4:
				period = TRIASSIC ;
				
				break ;
			case 5:
				period = PERMIAN ;
				
				break ;
			case 6:
				period = CARBONIFEROUS ;
				
				break ;
			case 7:
				period = DEVONIAN ;
				
				break ;
			case 8:
				period = SILURIAN ;
				break;
			case 9:
				period = ORDOVICIAN ;
				
				break ;
			case 10:
				period = CAMBRIAN ;
				
				break ;
			case 11:
				period = PRECAMBRIAN ;
				
				break;
			}

			switch( period)
			{
			case NEOGENE:
				cout << "Neogene " ;
				break;
			case PALEOGENE:
				cout << "Paleogene " ;
				break ;
			case CRETACEOUS:
				cout << "Cretaceous " ;
				break ;
			case JURASSIC :
				cout << "Jurassic " ;
				break ;
			case TRIASSIC :
				cout << "Triassic " ;
				break ;
			case PERMIAN :
				cout << "Permian " ;
				break ;
			case CARBONIFEROUS :
				cout << "Carboniferous " ;
				break ;
			case DEVONIAN :
				cout << "Devonian " ;
				break ;
			case SILURIAN :
				cout << "Silurian " ;
				break ;
			case ORDOVICIAN :
				cout << "Ordovician " ;
				break ;
			case CAMBRIAN :
				cout << "Cambrian " ;
				break ;
			case PRECAMBRIAN :
				cout << "Precambrian " ;
				break;
			}
		}
		cout << endl << endl ;
			return ;
		}




