#pragma once
#include "Pet.h"
#include <iostream>
using namespace std;
class Node
{
private:
	Pet pet;
	Node* next;
	Node* previous;
public:
	Node();
	Node(Pet, Node*, Node*);

	Pet getPet();
	Node* getNext();
	Node* getPrevious();

	void setPet(int, string, string, int);
	void setPet(Pet);
	void setNext(Node*);
	void setPrevious(Node*);
};

