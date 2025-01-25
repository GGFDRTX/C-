#pragma once
#include <bits/stdc++.h>
using namespace std;
class person
{
public:
	string name;
	string gender;
	string Address;

	int age;

	void setName(string n);
	void setGender(string g);
	void setAge(int a);
	void setAddress(string x);

	void getName();
	void getGender();
	void getAge();
	void getAddress();

	void display();

	person(string n, string g, int a);
	person();
};
