#include "calculator.h"
#include<iostream>
using namespace std;
void calculator::sum(int num1, int num2)
{
    cout << " Sum = "<<num1 + num2 << endl;
}
void calculator::multiply(int num1, int num2)
{
    float result = num1 * num2;
   cout << " Multiply = " << result << endl;
}
void calculator::division(int num1, int num2)
{
    float x = num1 / num2;
    cout << " Division = " << x << endl;
}

void calculator::Sub(int num1, int num2)
{
    cout <<" Sub = "<< num1 - num2 << endl;
}
