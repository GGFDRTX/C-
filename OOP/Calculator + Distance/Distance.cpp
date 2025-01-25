#include "Distance.h"
#include<iostream>
using namespace std;

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(float f, float i):feet(f),inches(i)
{
}

Distance Distance::operator++()
{
	++feet;
	++inches;
	return Distance(feet, inches);
}

Distance Distance::operator--()
{
	--feet;
	--inches;
	return Distance(feet, inches);
}

Distance Distance::operator++(int)
{
	feet++;
	inches++;
	return Distance(feet, inches);
}

Distance Distance::operator--(int)
{
	feet--;
	inches--;
	return Distance(feet, inches);
}

Distance Distance::sum2objects(Distance d1)
{
	Distance result;
	result.feet = feet + d1.feet;
	result.inches = inches + d1.inches;
	return result;
}

void Distance::display()
{
	cout << "feet=" << feet << endl;
	cout << "inches=" << inches << endl;
}
