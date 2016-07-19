/*
 * Node.h
 *
 *  Created on: Mar 7, 2016
 *      Author: routerz
 */


class Node
{
	private:
		double data;
		Node *nextptr;
		Node *prevptr;

	public:
		//default constructor
		Node();
		//one parameter overloaded constructor
		Node(double d);
		//three parameter overloaded constructor
		Node(double d, Node *pt, Node *pr);

		//Accessors
		double GetData();
		Node* GetNext();
		Node* GetPrev();

		//Mutators
		void SetData(double);
		void SetNext(Node*);
		void SetPrev(Node*);


};

