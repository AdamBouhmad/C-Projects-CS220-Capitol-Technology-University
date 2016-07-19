
#include "Node.h"
#include <iostream>
using namespace std;

class SortedLinkedList
{
private:

	//head of the list
	Node *head;
	//total number of items in list
	int numitems;
	//get data to overload
	//double data;

public:
	//default constructor constructing empty linked list
	SortedLinkedList();
	//Accessor for num of items
	int GetNumItems() const;
	//Function to insert doubles into proper place in the linked-list
	void Insert(double);
	//Function that deletes the first double specified that is found in the list
	int Delete(double);
	//Function that traverses the whole linked list
	void Traverse() const;


	//overloading <= operator
	/*bool LessThanOrEqualTo(const SortedLinkedList) const;
	bool Equal (SortedLinkedList) const;
	bool LessThan(SortedLinkedList) const;
	bool LessThanOrEqualTo(SortedLinkedList) const;
	bool operator <= (const SortedLinkedList&) const;*/

};


