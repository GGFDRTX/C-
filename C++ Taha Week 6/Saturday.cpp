#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
         for (int j = 1; j <= 4; j++)
         {
             for (int i = 1; i <= 4; i++)
             {

                 if (j == 1 || j == 4)
                     cout << "*";

                 else if (i == 1 || i == 4)
                     cout << "*";

                 else
                     cout << " ";

             }

             cout << endl;
         }

*/

    int a = 1;
    for (int rows = 1; rows <= 10; rows++) // Rows
    {

        for (int columns = 1; columns <= a; columns++) // columns
        {

            cout << "*";
            if (a == 5)
                break;
        }
        a++;
        return 0;
    }
}