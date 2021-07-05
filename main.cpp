#include <iostream> 
using namespace std;
#include "rational.h"


int main()
{
//Get Inputs
	rational R1, R2;
	cout << "\nEnter values for First Rational Number (R1):";
	R1.input();
	cout << "\nEnter values for Second Rational Number (R2):";
	R2.input();
	
	
	cout << "\n\n\n\nSample Arithmentic operations using two Rational numbers R1 & R2:-\n";
//Addition
	cout << "\nR1 + R2  = ";
	(R1+R2).output();

//Subtraction
	cout << "\nR1 - R2 = ";
	(R1-R2).output();

//Multiplication
	cout << "\nR1 * R2 = ";
	(R1*R2).output();
//Division
	cout << "\nR1 / R2 = ";
	(R1/R2).output();


//Simplified Versions
	cout << "\n\nPrinting Simplified User Inputs:-\n";
	cout << "\nFirst Rational Number  => ";
	cout << "\tFractional Form = ";
	R1.fractionof(); 
	cout << "\tDecimal Form = ";
	R1.decimalof();
	cout << "\nSecond Rational Number => ";
	cout << "\tFractional Form = ";
	R2.fractionof();
	cout << "\tDecimal Form = ";
	R2.decimalof();



//Negation
	cout << "\n\n\nUnary operations:-\n";
	cout << "\n-R1= ";
	(-R1).output();
	cout << "\n+R2= ";
	(+R2).output();


//Assignment Operator Overloading
	cout << "\n\n\nSample Assignment Operations:-";
	
// =
	rational R3 = R1;
	cout << "\n\nTesting: R3  = R1.\t\tNow, R3=";
	R3.output();

// +=
	cout << "\nTesting: R2 += R1.\t\tNow, R2= ";
	(R2 += R1).output();

// -=
	cout << "\nTesting: R2 -= R1.\t\tNow, R2=";
	(R2 -= R1).output();
// *=
   	cout << "\nTesting: R2 *= R1.\t\tNow, R2=";
	(R2 *= R1).output();
// /=
	cout << "\nTesting: R2 /= R1.\t\tNow, R2=";
	(R2 /= R1).output();

	cout << "\n";
	return 0;
}