#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int sum[3];
    int sum0[4];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum1 += arr[i][j];
        }
        sum[i] = sum1;
        sum1 = 0;
    }
    for (int k = 0; k < 3; k++)
    {
        cout << "The sum of the Row #" << k + 1 << endl;
        cout << sum[k] << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum2 += arr[j][i];
        }
        sum0[i] = sum2;
        sum2 = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "The sum of columns#" << i + 1 << endl;
        cout << sum0[i] << endl;
    }
}
