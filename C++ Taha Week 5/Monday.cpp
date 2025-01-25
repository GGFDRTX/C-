#include <bits/stdc++.h>

using namespace std;

int main()
{
   int Number;
    cout << "Enter Number" << endl;

    cin >> Number;

    int x = 0;

    do
    {
        cout << x << endl;
        x++;

    } while (x <= Number);

    string password = "pass123";
    string pass;

    cout << "Enter Password : " << endl;
    cin >> pass;

    while (pass != password)
    {
        cout << "Incorrect Password Try Again" << endl;

        cout << "Enter Password" << endl;
        cin >> pass;
    }

    cout << "Correct Password" << endl;

    
         int n=0;
         int reversed_num; 
         int remainder_num;

        cout << "Enter a number: ";
        cin >> n;
        
        while (n != 0)
        {
            remainder_num = n % 10;
            reversed_num =  reversed_num*10 + remainder_num;
            n /= 10;
        }

        cout << "Reversed Number  = " << reversed_num << endl;
        return 0;
    }
