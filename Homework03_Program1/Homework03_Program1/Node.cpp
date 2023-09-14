#include "Node.h"
Node::Node()
{
	next = nullptr;
	previous = nullptr;
}
Node::Node(Pet p, Node* n, Node* prev)
{
	pet = p;
	next = n;
	previous = prev;
}

Pet Node::getPet()
{
	return pet;
}
Node* Node::getNext()
{
	return next;
}
Node* Node::getPrevious()
{
	return previous;
}

//sets the pet using the variables given
void Node::setPet(int i, string t, string n, int a)
{
	pet.setId(i);
	pet.setType(t);
	pet.setName(n);
	pet.setAge(a);
}
//sets the pet to the provided pet
void Node::setPet(Pet p)
{
	pet = p;
}
//sets the next node using a provided node pointer
void Node::setNext(Node* n)
{
	next = n;
}
//sets the previous node using a provided node pointer
void Node::setPrevious(Node* prev)
{
	previous = prev;
}