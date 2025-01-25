#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Break And Continue
   
        /*for (int i = 0; i < 10; i++)
        {
            if (i == 5)
                continue; // Skip The Next Block Of Code inside the for loop : (5)
            cout << "I = " << i << "\n";
        }
/*
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
                break; //  It will Stop When I is = to 5
            cout << "j = " << j << "\n";
        }
    */
/*
    cout << "enter Number of rows" << endl;
    int number_of_rows;
    cin >> number_of_rows;

    cout << "enter Number of columns" << endl;
    int number_of_cols;
    cin >> number_of_cols;

    for (int i = 0; i < number_of_rows; i++)
    {
        for (int j = 0; j < number_of_cols; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
*/
    int rows = 8;
    int space = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
        space--;
    }

    return 0;
}
