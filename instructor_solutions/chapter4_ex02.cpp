//Ken Adcock
//Exercise 4-2
//This file writes 12 temperatures to an output file, along with difference in temps
//Then displays the avg temp
//9/24/04

#include <fstream>						//for accessing output file
#include <iomanip>						//for set precision
#include <iostream>						//for cin and cout

using namespace std;

int main()
{
	//Declare and open file to write to
	ofstream outData;
	outData.open("f:tempData.dat");  // put file on flash drive


	//Declare variables
	float temp1;
	float temp2;
	float temp3;
	float temp4;
	float temp5;
	float temp6;
	float temp7;
	float temp8;
	float temp9;
	float temp10;
	float temp11;
	float temp12;
	float avgTemp;
	float tempSum;


	//Prompt user for input and write to output file

	cout <<fixed <<setprecision(1);						//set up floating pt output format
	cout <<"Enter temperature 1: ";						//prompt user for temp
	cin >>temp1;										//hold value in temp1
	cout <<"Temperature 1 is: : " <<temp1 <<endl <<endl;	//display the value typed
	outData <<fixed <<setprecision(1) <<temp1 <<endl;	//write to tempData.dat file

	cout <<"Enter temperature 2: ";						//prompt and record temp2
	cin >>temp2;
	cout <<"Temperature 2 is: : " <<temp2 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp2 <<' ' <<temp2-temp1 <<endl;

	cout <<"Enter temperature 3: ";						//prompt and record temp3
	cin >>temp3;
	cout <<"Temperature 3 is: : " <<temp3 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp3 <<' ' <<temp3-temp2 <<endl;

	cout <<"Enter temperature 4: ";						//prompt and record temp4
	cin >>temp4;
	cout <<"Temperature 4 is: : " <<temp4 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp4 <<' ' <<temp4-temp3 <<endl;

	cout <<"Enter temperature 5: ";						//prompt and record temp5
	cin >>temp5;
	cout <<"Temperature 5 is: : " <<temp5 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp5 <<' ' <<temp5-temp4 <<endl;

	cout <<"Enter temperature 6: ";						//prompt and record temp6
	cin >>temp6;
	cout <<"Temperature 6 is: : " <<temp6 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp6 <<' ' <<temp6-temp5 <<endl;

	cout <<"Enter temperature 7: ";						//prompt and record temp7
	cin >>temp7;
	cout <<"Temperature 7 is: : " <<temp7 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp7 <<' ' <<temp7-temp6 <<endl;

	cout <<"Enter temperature 8: ";						//prompt and record temp8
	cin >>temp8;
	cout <<"Temperature 8 is: : " <<temp8 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp8 <<' ' <<temp8-temp7 <<endl;

	cout <<"Enter temperature 9: ";						//prompt and record temp9
	cin >>temp9;
	cout <<"Temperature 9 is: : " <<temp9 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp9 <<' ' <<temp9-temp8 <<endl;

	cout <<"Enter temperature 10: ";						//prompt and record temp10
	cin >>temp10;
	cout <<"Temperature 10 is: : " <<temp10 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp10 <<' ' <<temp10-temp9 <<endl;

	cout <<"Enter temperature 11: ";					//prompt and record temp11
	cin >>temp11;
	cout <<"Temperature 11 is: : " <<temp11 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp11 <<' ' <<temp11-temp10 <<endl;

	cout <<"Enter temperature 12: ";					//prompt and record temp12
	cin >>temp12;
	cout <<"Temperature 12 is: : " <<temp12 <<endl <<endl;
	outData <<fixed <<setprecision(1) <<temp12 <<' ' <<temp12-temp11 <<endl;


	//Compute sum of all temperatures
	tempSum=temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10+temp11+temp12;
	
	//Compute average temp	
	avgTemp=tempSum/12;


	//output to screen the average
	cout <<"The average of all 12 temperatures is: " <<avgTemp <<endl;
	
	cin.get();
	cin.get();


	//close output file
	outData.close();

	

	return 0;

}