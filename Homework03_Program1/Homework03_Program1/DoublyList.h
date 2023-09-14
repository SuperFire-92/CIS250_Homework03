#pragma once
#include "Node.h"
class DoublyList
{
private:
	Node* head;
	Node* tail;
public:
	DoublyList();

	void appendNode(int, string, string, int);
	void insertNode(int, string, string, int);
	void deleteNode(int);
	void displayForward();
	void displayBackward();
};

