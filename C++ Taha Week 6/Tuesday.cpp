#include <bits/stdc++.h>
using namespace std;
/*
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}

void fun(int n)
{
    if (n < 1) // Base Case
        return;
    else
        cout << "Round::" << n << endl; // Logic Case
    fun(n - 1);                         // Sub Problem
                                        // He Called The Same Function Again but with a different n.
}

int sum(int x)
{
    if (x == 0)
        return 0;
    else
        return x % 10 + sum(x / 10);
}

void yy(int start = 20; int end = 0; int odd; int even;)
{
    int z = x;

    if (start % 2 == 0)
    {
        sum1 = z + x;
        cout << sum1 << endl;
        return yy(x - 1);
    }
    else if (start % 2 != 0)
    {
        sum2 = z + x;
        cout << sum2 << endl;
        return yy(x - 1);
    }
}
*/
int fib(int n)
{ // fib -- fibonacci
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    // cout << sum(12345) << endl;
    // int x = -343;
    // int y = 65;
    // swap(x, y);
    // cout << "X = " << x << endl
    //  << "Y = " << y << endl;
    // fun(7);
    // yy();
    int n;
    int num1;
    cout << "Enter the value of n1: ";
    cin >> n;
    cout << "Fibonacci series: " << fib(n) << endl;
    return 0;
}