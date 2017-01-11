/* 
Student: John McDonnell
Class: CIS1610
Instructor: Dr. Ken Adcock
Date:2/06/2011
Chapter/Assignment Section/Problem: 3/Programming Problems/3
Program Description:
The purpose of this program is to compute the exact factorial of the integer 15 and the approximate factorial of the integer 15 then compare the difference.
*/

#include <iostream> // to output results
#include <string> // for the string data type
#include <iomanip> // to display different variations of the results from scientific to fixed width notation etc
#include <cmath> // for sqrt function

using namespace std;

int main() 
{
const float FACTORIAL_NUM = 15.00;
const double PI = 3.14159265;
double stirlingsFormula = (exp(-FACTORIAL_NUM)) * (pow(FACTORIAL_NUM, FACTORIAL_NUM)) * (sqrt(2.0*PI*FACTORIAL_NUM)); // compute sterlings formula
double exactFactorial1 = (15*14*13*12*11); // divide the factorial division up into three parts, because of a memory issue? trying 15*14*13*12 etc will not work. a loop here would be efficient. But since thats beyond the scope of chapter 3... i stuck to this
double exactFactorial2 = (10*9*8*7*6);
double exactFactorial3 = (5*4*3*2*1);
double totalFactorial = exactFactorial1*exactFactorial2*exactFactorial3; // calculate the factorial
long long integerFactorial = totalFactorial; // convert to integer 
long long stirlingsInteger = stirlingsFormula;
double differenceAnswer = (integerFactorial - stirlingsFormula); // find the difference between the two
cout << "Fifteen Factorial using Sterlings Approximation Formula: " << setprecision(0) << fixed << stirlingsInteger << endl;
cout << endl;
cout << "Exact Fifteen Factorial: " << fixed << integerFactorial << endl;
cout << endl;
cout << "Difference Between Sterlings and the Exact: " << differenceAnswer << endl;
cout << endl;
cout << " ***There will be a numeric deviation with floating point numbers on computers";
cout << endl;
cin.get();
return 0;
}


