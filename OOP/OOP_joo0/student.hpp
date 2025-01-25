#pragma once
#include "person.hpp"
#include <bits/stdc++.h>

class student : public person
{
private:
	float gpa;
	string department;
	static int counter;

public:
	void setGpa(float g);
	void setDepartment(string d);

	void getGpa();
	void getDepartment();

	student();
};