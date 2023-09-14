#include "Pet.h"

Pet::Pet()
{
	id = -1;
	type = "";
	name = "";
	age = -1;
}
Pet::Pet(int i, string t, string n, int a)
{
	id = i;
	type = t;
	name = n;
	age = a;
}

int Pet::getId()
{
	return id;
}
string Pet::getType()
{
	return type;
}
string Pet::getName()
{
	return name;
}
int Pet::getAge()
{
	return age;
}

void Pet::setId(int i)
{
	id = i;
}
void Pet::setType(string t)
{
	type = t;
}
void Pet::setName(string n)
{
	name = n;
}
void Pet::setAge(int a)
{
	age = a;
}