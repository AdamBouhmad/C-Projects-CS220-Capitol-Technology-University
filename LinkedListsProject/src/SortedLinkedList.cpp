#include "SortedLinkedList.h"


//Default constructor setting head and num items to null
SortedLinkedList::SortedLinkedList()
{
	head=0;
	numitems=0;
}

//Accessor returning numitems
int SortedLinkedList::GetNumItems() const
{
	return numitems;
}

//Insert Function
void SortedLinkedList::Insert(double d) //take a look back
{
	//create a new node
	Node *nd = new Node(d);
	/*if (numitems!=0)
		for(int i=numitems; i>0; i--) //Was trying to go through the list to then insert an item in correct place
		{

		}*/
	//Attach node to front of the list
	nd->SetNext(head);
	//update head
	head = nd;
	//update the total numitems in linked list
	numitems++;
}

int SortedLinkedList::Delete(double value)
{
	Node *previous = 0;
	Node *current = head;
	// while the first pos of current isn't null check if currents Data == the value entered
	while(current != 0)
	{
		if(current->GetData() == value)
		{
			break;
		}
		previous = current;
		current = current ->GetNext();
	}
	//if current pos == 0 return -1
	if(current == 0)
	{
		return -1;
	}
	//if current is the head, delete current and decrement the amount of items in list
	else if(current == head)
	{
			head = head->GetNext();
			delete current;
			numitems--;
			return 0;
	}
	//Set previous to the next node, current to the next node after that, delete current
	else
	{
		previous->SetNext(current->GetNext());
		delete current;
		numitems--;
		return true;
	}

}

//Traverse Nodes
void SortedLinkedList::Traverse() const
{
	Node *nd = head;
	cout << "List: ";
	//while nd is not equal to zero, cout the value stored in nd, and then move to the next node
	while(nd !=0)
	{
		cout << nd->GetData() << " ";
		nd = nd->GetNext();
	}
	cout << endl;
}

//BREAK

/*bool SortedLinkedList::Equal(SortedLinkedList sll) const
{
	return data == sll.GetData();
}

bool SortedLinkedList::LessThan(SortedLinkedList sll) const
{
	if(data < sll.Getdata)
	{
		return true;
	}
	else if( data > sll.GetData())
		return false;
	else // data in nodes are equal
	{
		cout << "Your Data is equal to a value that's in the list";
		//ask user where they want to put it, in front or below the current node              //Was trying to overload <= operator to check and see item compared to another in list
	}
}

bool SortedLinkedList::LessThanOrEqualTo(SortedLinkedList sll) const
{
	return Equal( sll ) || LessThan(sll);
}

bool SortedLinkedList::operator<=(SortedLinkedList sll) const
{
return LessThanOrEqualTo(sll);
}
*/
