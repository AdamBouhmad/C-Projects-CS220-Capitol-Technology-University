#include <cstdlib>

#include "SortedLinkedList.h"

int main(int argc, char *argv[])
{
	//created SortedLinkedList object sll
    SortedLinkedList sll;

    //create an empty SortedLinkedList
    SortedLinkedList();
    //cout the total items in the SortedLinkedList
    cout << "Items:" << sll.GetNumItems( ) << endl;

    //Inserting data into nodes and then Traversing the list
    sll.Insert( 10 );
    sll.Traverse();
    sll.Insert(20);
    sll.Traverse();
    sll.Insert(30);
    sll.Traverse();
    sll.Insert(9);
    sll.Traverse();
    sll.Insert(31);
    sll.Traverse();

    //Deleting nodes holding specific data and then traversing the list
    sll.Delete(30);
    sll.Traverse();
    sll.Delete(60);
    sll.Traverse();
    sll.Delete(20);
    sll.Traverse();


}





































