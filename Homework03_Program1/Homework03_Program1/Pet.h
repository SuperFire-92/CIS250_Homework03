#pragma once
#include <iostream>
using namespace std;
class Pet
{
private:
	int id;
	string type;
	string name;
	int age;
public:
	Pet();
	Pet(int, string, string, int);

	int getId();
	string getType();
	string getName();
	int getAge();

	void setId(int);
	void setType(string);
	void setName(string);
	void setAge(int);
};

