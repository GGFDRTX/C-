#pragma once
class Distance
{
private:
	float feet;
	float inches;
public:
	Distance();
	Distance(float f, float i);
	Distance operator ++();
	Distance operator --();
	Distance operator ++(int);
	Distance operator --(int);
	Distance sum2objects(Distance betngan);
	void display();
};

