#include <iostream>
using namespace std;
int main()
{
   

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << 'x';
        }
        cout << '\n';
    }
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << ' ';
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << 'x';
        }
        cout << '\n';
    }

    return 0;
}