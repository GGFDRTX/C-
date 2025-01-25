#pragma once
class Rectangle
{

public:
	float width;
	float length;
	Rectangle(float w,float h);
	Rectangle operator ++();
	Rectangle operator --();
	Rectangle operator ++(int);
	Rectangle operator --(int);
	Rectangle operator +(Rectangle r1);

	void Display() const;
};

