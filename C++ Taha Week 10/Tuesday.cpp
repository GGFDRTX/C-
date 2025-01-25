#include <bits/stdc++.h>
using namespace std;
int main()
{ /*
     int num = 1;
     int num2 = 1;
     for (int i = 1; i < 5; i++)
     {
         for (int k = 5; k > 0; k--)
         {
             cout << " ";
         }
         for (int j = 1; j < i; j++)
         {
             cout << num;
             num++;
         }
         cout << endl;
     }
 */

    int num2;
    cout << "Enter the Number" << endl;
    cin >> num2;
    int num = num2;

    int remainder_num;
    int reversed_num;

    while (num2 != 0)
    {
        remainder_num = num2 % 10;
        reversed_num = reversed_num * 10 + remainder_num;
        num2 /= 10;
    }

    cout << num / 10 << reversed_num << endl;

        return 0;
}