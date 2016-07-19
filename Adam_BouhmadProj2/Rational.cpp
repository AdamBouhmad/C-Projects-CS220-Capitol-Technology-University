#include "Rational.h"

//default constructor
//numerator and denominator are given default values if no argument is passed
Rational::Rational( )
{

SetNumerator(0);
SetDenominator(1);


}

//overloaded constructor
Rational::Rational(int n) //rational with one parameter
{
SetNumerator(n);
SetDenominator(1); //denominator is automatically set to 1
}

//overloaded constructor
Rational::Rational(int n, int d) //rational with two parameters, numerator and denominator
{
SetNumerator(n);
SetDenominator(d);

}

//Accessor for Numerator
int Rational::GetNumerator() const
{
	return numerator;
}

//Accessor for Denominator
int Rational::GetDenominator() const
{
	return denominator;
}


//mutator for numerator
void Rational::SetNumerator(int n)
{
	//if argument is a positive even number assign numerator to n
	//if(n >= 0 && (n%2) == 0)
		numerator = n;
}


//mutator for denominator
void Rational::SetDenominator(int d)
{
	if(d == 0)
	{
		denominator = 1;
	}
	else
	{
		denominator = d;
	}

}

double Rational::DoubleRational()
{

	return (double)numerator/denominator;

}

//Addition Operator Overloaded
Rational Rational::operator+ (const Rational& rat)
{
Rational sum;
sum.numerator = numerator * rat.denominator + rat.numerator * denominator;
sum.denominator = denominator * rat.denominator;
return sum;
}

//Multiplication Operator Overloaded
Rational Rational::operator * (const Rational& rat)
{
Rational product;
product.numerator = numerator * rat.numerator;
product.denominator = denominator * rat.denominator;
return product;
}

//Excersion Operator Overloaded
ostream& operator << (ostream& out, const Rational& rat)
{
	out <<rat.GetNumerator() << "/" << rat.GetDenominator() << endl;
	return out;
}

//Incersion Operator Overloaded
istream& operator >> (istream& in, Rational& rat)
{
	int n, d;
	in >> n >> d;
	rat.SetNumerator(n);
	rat.SetDenominator(d);
	return in;
}



