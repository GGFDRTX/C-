#include "student.hpp"
using namespace std;
#include <bits/stdc++.h>
int student::counter = 0;
void student::setGpa(float g)
{
	this->gpa = g;
}

void student::setDepartment(string d)
{
	this->department = d;
}

void student::getGpa()
{
	cout << "GPA is : " << this->gpa;
}

void student::getDepartment()
{
	cout << "Department is : " << this->department;
}

student::student()
{
	this->counter++;
	cout << "Welcome student " << this->counter << endl;
}
