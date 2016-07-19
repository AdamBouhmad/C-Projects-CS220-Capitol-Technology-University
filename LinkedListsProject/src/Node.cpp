/*
 * Node.cpp
 *
 *  Created on: Mar 7, 2016
 *      Author: routerz
 */
#include "Node.h"

//default constructor
Node::Node()
{
//no data, set to 0.
SetData(0.0);
//Next Node and Previous Node are NULL
SetNext(0);
SetPrev(0);
}

//overloaded constructor
Node::Node( double d )//Node with one parameter
{
	//Adding Data to Node
	SetData(d);
	//Next Node and Previous Node are NULL
	SetNext(0);
	SetPrev(0);
}

//overloaded constructor
Node::Node( double d, Node *np, Node*pp) //Node with three parameters, Set Data, Set Next Node, Set Previous Node
{
	SetData(d);
	SetNext(np);
	SetPrev(pp);
}

//Accessor for Data
double Node::GetData()
{
	return data;
}

//Accessor for Next Node
Node* Node:: GetNext()
{
	return nextptr;
}

//Accessor for Previous Node
Node* Node:: GetPrev()
{
	return prevptr;
}

//Mutator for Data
void Node::SetData(double d)
{
	data = d;
}

//Mutator for Next Node
void Node::SetNext(Node* np)
{
	nextptr = np;
}

//Mutator for Previous Node
void Node::SetPrev(Node* pp)
{
	prevptr = pp;
}
