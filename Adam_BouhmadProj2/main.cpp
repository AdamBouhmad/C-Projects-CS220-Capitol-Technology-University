#include "Rational.h"

#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[])
{
	//declare Rational objects
	Rational rat1;
	Rational rat2;
	Rational rat3;
	Rational rat4;
	Rational rat5;

	//TEST default constructor
	rat1 = Rational();
	cout << "Initial Rational Expression:" << rat1 << endl;

	//TEST 1 param overloaded constructor
	rat2 = Rational(100);
	cout << "One Parameter overloaded constructor Rational Expression:" << rat2 << endl;

	//TEST 2 param overloaded constructor
	//0 changes to one -> Refer to SetDenominator Mutator in Rational.cpp
	rat3 = Rational(10, 0);
	cout << "Two Parameter overloaded constructor Rational Expression:" << rat3 << endl;


	//cout << rat3.numerator << endl; -> numerator is private, won't run


	// TEST accessing Numerator and Denominator
	cout << "The Rational Expression for rat2:" << rat2.GetNumerator() << "/" << rat3.GetDenominator() << endl;


	//SetNumerator mutator meets condition, sets numerator to 5
	rat3.SetNumerator(5);
	cout << "Value:" << rat3.GetNumerator() << " is assigned via SetNumerator"<< endl;


	//Testing negative numerator to break program
	rat3.SetNumerator(-2);
	//Testing -0 in attempt to break program
	rat3.SetDenominator(-0);
	cout <<"TEST:" << rat3 << endl;


	//testing Accessors
	cout << rat3.GetNumerator() << "/" << rat3.GetDenominator() << endl;

	//testing member function returning double equivalent

	cout << "Testing rat3.DoubleRational():" << rat3.DoubleRational()<< endl;

	//TESTING OVERLOADED CIN/COUT

	cout << "Input numerator and denominator for rat2:";
	cin >> rat2;
	cout << "____________"<< endl;
	cout << "You have set rat2 to " << rat2 << endl;


	cout << "Input numerator and denominator for rat3:";
	cin >> rat3;
	cout << "____________" << endl;
	cout << "You have set rat3 to " << rat3 << endl;
	cout << "____________"<< endl;

	//Addition Overloading test
	rat4 = rat3 + rat2;
	cout << "rat3 + rat2 = " << rat4;

	//Multiplication Overloading Test
	rat5 = rat3 * rat2;
	cout << "rat3 * rat2 = " << rat5;


}
