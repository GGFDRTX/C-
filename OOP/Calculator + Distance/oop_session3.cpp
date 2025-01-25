#include <iostream>
#include <string>
#include "calculator.h"
#include "Distance.h"
using namespace std;
int main()
{
	calculator::Sub(2, 3);
	calculator::multiply(2, 3);
	calculator::division(2, 3);
	calculator::sum(2, 3);

	/*int x = 5, y = 10;
	cout << x + y;
	string text1 = "hello ", text2 = "world";
	cout << text1 + text2;*/
	/*Distance d1;*/

	/*d1++;
	d1++;
	d1--;
	d1.display();*/
	/*Distance d1(4,5.5), d2(2.5, 3.5), d3;
	d3 = d1.sum2objects(d2);
	d3 = d1.sum2objects(d1);
	d3.display();*/
}
