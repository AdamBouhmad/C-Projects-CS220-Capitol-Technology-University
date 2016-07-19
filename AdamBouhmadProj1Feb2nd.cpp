#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


//Functions
void writeToFile();
void readFromFile(int arr[], int size);
int max(int arr[], int size);
void outputArray(int arr[], int size);

int main(int argc, char *argv[])
{
	const int arr_size = 6; //immutable arr_size of 6 is declared
	int filenums[6]; //number of values in array filenums
	writeToFile();//function call
	readFromFile(filenums,arr_size);//function call
	outputArray(filenums,arr_size);//function call
	cout << endl << endl; //two new lines
	cout << max(filenums,arr_size);//Print output of max Function
	cout << endl << endl; //two new line
	outputArray(filenums,arr_size); //function call
}

void writeToFile()
{

	ofstream outFile; //initializing ofstream variable outFile
	outFile.open("numbers.txt"); //create and write to numbers.txt
	outFile << 1 << "," << 2 << ","
	<< 4 << "," << 8 << "," << 16 << "," << 32 << endl; //numbers and commas written to file
	outFile.close(); // close the file
}

void readFromFile(int arr[], int size)
{
	char space; //char space skips comma
	ifstream inFile; 			//initializing ifstream variable inFile
	inFile.open("numbers.txt");//in read mode

	while(inFile)
	{
		for(int i =0; i < size; i++) //loop over size of array
		{
			inFile >> arr[i] >> space; //data from file goes into array via ifstream
		}

	}

	inFile.close(); //close filestream
}

int max(int arr[], int size)
{

	int largestinteger = 0; //variable to find largest integer in array
	for(int i = 0; i < size; i++) //loop over size of array
	{

		if(arr[i] > largestinteger) //test value at index of array to largestinteger value
			largestinteger = arr[i]; //if condition is true, largestinteger = value at array[i]
	}
		return largestinteger; //largest int returned
}

void outputArray(int arr[], int size)
{
	for(int i = 0; i < size; i++) //loop over size of array
	{
		cout << arr[i] << ' '; // Value at index of array sent to stream, following a single space
	}

}
