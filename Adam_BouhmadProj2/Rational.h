#include <iostream>

using namespace std;

class Rational
{
	private:
		//private data members
		int numerator;
		int denominator;

	public:
		//default constructor
		Rational();
		//One parameter overloaded constructor
		Rational(int);
		//two parameter overloaded constructor
		Rational(int, int);

		//Accessors
		int GetNumerator() const;
		int GetDenominator() const;

		//Set Numerator and Set Denominator Mutators
		void SetNumerator(int);
		void SetDenominator(int);
		double DoubleRational();

		//overloaded operators
		Rational operator+ (const Rational&);
		Rational operator* (const Rational&);
		friend ostream& operator << (ostream&, const Rational&);
		friend istream& operator >> (istream &, Rational&);
};




