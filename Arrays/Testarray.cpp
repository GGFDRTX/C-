#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6] = {0, 1, 0, 0, 1, 1};
    int counter1;
    int counter2;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            counter1++;
        }
    }

    for (int a = 0; a < counter1; a++)
    {
        arr[a] = 0;
        cout << arr[a] << endl;
    }

    for (int a = counter1; a < 6; a++)
    {
        arr[a] = 1;
        cout << arr[a] << endl;
    }
}
