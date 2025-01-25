#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(float w, float h)
{
	this->width = w;
	this->length = h;
}

Rectangle Rectangle::operator++()
{
	float wid = ++this->width;
	float len = ++this->length;
	return Rectangle(wid, len);
}

Rectangle Rectangle::operator--()
{
	float wid = --this->width;
	float len = --this->length;
	return Rectangle(wid, len);
}

Rectangle Rectangle::operator++(int)
{
	float wid = this->width++;
	float len = this->length++;
	return Rectangle(wid, len);
}

Rectangle Rectangle::operator--(int)
{
	float wid = this->width--;
	float len = this->length--;
	return Rectangle(wid, len);
}

Rectangle Rectangle::operator+(Rectangle r1)
{
	float wid = this->width + r1.width;
	float len = this->length + r1.length;
	return Rectangle(wid, len);
}

void Rectangle::Display() const
{
	cout << "Width is : " << this->width << endl;
	cout << "Length is : " << this->length << endl;
}
