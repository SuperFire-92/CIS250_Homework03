//=============================================================
//Name: Nicolaas Dyk
//Date: 03-13-2023
//Desc: Creating a Doubly Linked List
//=============================================================

#include <iostream>
#include "DoublyList.h"

using namespace std;

void runAppendDisplay(DoublyList&);
void runInsertDisplay(DoublyList&);
void runDeleteDisplay(DoublyList&);

int main()
{
    //keep track of the user's inputted choice
    int choice = 0;

    //start a loop that will only end when the user inputs -999
    while (choice != -999)
    {
        //create a doubly linked list
        DoublyList list;
        cout << endl;
        cout << "Make a choice (1 for append, 2 for insert, 3 for delete): ";
        cin >> choice;
        //if the user selects 1, 2, or 3, run append
        if (choice > 0 && choice < 4)
        {
            runAppendDisplay(list);
        }
        //if the user selects 2 or 3, run insert
        if (choice > 1 && choice < 4)
        {
            runInsertDisplay(list);
        }
        //if the user selects 3, run delete
        if (choice > 2 && choice < 4)
        {
            runDeleteDisplay(list);
        }
    }
    
}

//takes a DoublyList and appends 5 nodes onto it, then displays it
void runAppendDisplay(DoublyList& list)
{
    list.appendNode(10, "Dog", "Spot", 4);
    list.appendNode(20, "Cat", "Hades", 6);
    list.appendNode(30, "Bird", "Sparta", 18);
    list.appendNode(40, "Snake", "Carl", 9);
    list.appendNode(50, "Lobster", "Timothy", 22);

    system("CLS");
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=     Appending     =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Forward Display  =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayForward();
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Backward Display =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayBackward();
}

//takes a DoublyList and inserts 3 nodes into it, then displays it
void runInsertDisplay(DoublyList& list)
{
    list.insertNode(5, "Cat", "Sam", 2);
    list.insertNode(35, "Cat", "Baskin", 10);
    list.insertNode(55, "Dog", "Marcus Jr.", 8);

    system("CLS");
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=     Inserting     =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Forward Display  =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayForward();
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Backward Display =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayBackward();
}

//takes a DoublyList and deletes 3 nodes from it, then displays it
void runDeleteDisplay(DoublyList& list)
{
    list.deleteNode(5);
    list.deleteNode(30);
    list.deleteNode(55);

    system("CLS");
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=     Deleting      =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Forward Display  =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayForward();
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    cout << "=~=  Backward Display =~=" << endl;
    cout << "===~=~=~=~=~=~=~=~=~=~===" << endl;
    list.displayBackward();
}