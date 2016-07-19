//============================================================================
// Name        : RecursionProj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double Prodofelements(double [], int);
int Valuerepeat(int, int [], int);
bool Stringsubstring(string, string);
int FoundSubword(string);
void ReverseArray(int [], int);

int main()
{
//An array of doubles of size 6
double arr[] = {2.4,5.0,-1.0,-5.0,1.2,2.1};

//output the product of elements in a passed in array of Doubles to the function Prodofelements
cout << "Product Of Elements in an Array of Doubles: " << Prodofelements(arr, 6) << endl << endl; //

// An array of ints of size 4
int arrayofints[] = {2,5,5,20};

// output the total amount of ints in an array from the function Valuerepeat
cout << "How many ints in an Array: " << Valuerepeat(5, arrayofints, 4) << endl << endl; // print out how many times the value is found

// output True if a String is completely made-up of a Substring, false if it isnt.
cout << "True or False, is String only madeup of Substring: "<< Stringsubstring("abc", "abcabcabcabc") << endl<< endl;

//output how many times the subword abc is found in a random string
cout << "FoundSubword total: " << FoundSubword("abcabcwoof") <<endl;


ReverseArray(arrayofints, 4); // Reverse an Array
}

//recursive function that returns product of the type double elements in an array
double Prodofelements(double arr[], int arr_size)
{
	if(arr_size <= 0) //Base case: empty array
	{
		return -1;
	}
	else if(arr_size == 1) //Base case: return the one value in the array
	{
		return arr[0];
	}
	else //general case
	{

		return arr[arr_size - 1] * Prodofelements(arr, arr_size - 1); //multiply the index arr_size -1 each time until everything is returned
	}
}

//recursive function that outputs the total amount of ints in an array
int Valuerepeat(int value, int arr[], int arr_size)
{
	if(arr_size <= 0) //Base case: empty array
	{
		return -1;
	}
	else if(arr_size == 1) //Base case: one value in array
	{
		if(arr[0] == value) //if the only item is equal to value return 1, else return 0
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	else //General case
	{
		return (value == *arr) + Valuerepeat(value, arr+1, arr_size -1); //check to see if value is equal to the current value in the array recursively.
	}
}

//recursive function evaluating to true if the word is completely made up of a substring, false if otherwise
//EXAMPLE: substring=xyz, word = xyzxyz ---- result is true.
bool Stringsubstring(string subword, string word)
{
	int beginning = 0;
	int value = subword.length();
	if(subword.length() > word.length()) // Base case to check and see if the substring is bigger than the word in length
	{
		return false;
	}


	else if(subword != word.substr(0, subword.length())) // if subword is not the same as word.substr at the same length, return false
	{
		return false;
	}
	else
	{
		return (subword == word) + Stringsubstring(subword, word.substr(beginning += value)); // Recursively compare subword to word
																							  // Add the beginning value to the length of the
																							  // Subword recursively to compare subword to word
	}
}

//recursive function checking to see how many times the string 'abc' is found in the passed in argument word
int FoundSubword(string word)
{
	string mystring = "abc"; //set 'abc' to mystring for quick reference and neatness

	if(word.length() < mystring.length())//Return 0 if the word is smaller than mystring
	{
		return 0;
	}
	else if(word.substr(0,3) == mystring)
	{
		return 1 + FoundSubword(word.substr(3));
	}
	else
	{
		return FoundSubword(word.substr(3));
	}
}

//recursively reverse an array of ints
void ReverseArray(int arr[], int arr_size)
{
if (arr_size > 0)
{
ReverseArray(arr+1,arr_size-1); //As long as arr_size is greater than 0, increment arr position, decrement the size of the array
cout << arr[0] << "   "; //cout the new position of the value in the arr. CHANGES ARE NOT PERMANENT, only visible during cout.
}

}


