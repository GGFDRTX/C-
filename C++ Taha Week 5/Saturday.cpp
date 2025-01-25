#include <bits/stdc++.h>
using namespace std;

int main()
{
/*
    int i = 0;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    for (int i; i <= 5; i++) // Because It is already i = 5 so this for loop will not work so it will jump to line 19.

    {
        cout << i << endl;
    }
    cout << i << endl;

    int rows = 5;
    int cols = 3;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
*/
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i <= j; i++) //  *
        {
            cout << "*";
        }
        cout << endl;
    }
/*
    cout << "enter Number of rows" << endl;
    int number_of_rows;
    cin >> number_of_rows;

    cout << "enter Number of columns" << endl;
    int number_of_cols;
    cin >> number_of_cols;

    for (int j = 0; j < number_of_rows; j++) // 2
    {
        for (int i = 0; i <= j; i++)
        {
            cout << j;
        }
        cout << endl; // To Make A New Line
    }
*/
    return 0;
}

