#pragma once
#include "person.h"
class student : public person
{
public:
	float GPA;
	int level;
	void display();
};