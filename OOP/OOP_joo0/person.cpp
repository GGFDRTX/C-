#include "person.hpp"
#include <bits/stdc++.h>
using namespace std;

void person::setName(string n)
{
	this->name = n;
}

void person::setGender(string g)
{
	this->gender = g;
}

void person::setAge(int a)
{
	this->age = a;
}

void person::setAddress(string x)
{
	this->Address = x;
}

void person::getName()
{
	cout << "Name is : " << this->name;
}

void person::getGender()
{
	cout << "Gender is : " << this->gender;
}

void person::getAge()
{
	cout << "Age is : " << this->age;
}

void person::getAddress()
{
	cout << "Your Address Is : " << this->Address;
}

void person::display()
{
	cout << "Name is : " << this->name << endl;
	cout << "Gender is : " << this->gender << endl;
	cout << "Age is : " << this->age << endl;
	cout << "Your Address is: " << this->Address << endl;
}

person::person(string n, string g, int a)
{
	this->name = n;
	this->gender = g;
	this->age = a;
}


