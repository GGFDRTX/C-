#include <iostream>

// Global variables
// local variables
using namespace std;

// int main()

/*
{
    int x = 1; // THis is the Global Variable

    {
        int x = 2;
        cout << x<<endl;
    }
    cout << x << endl;
    return 0;
}
*/

int main()
{

    int x = 1;
    {

        int y = 4;
        int x = 2;
        cout << x << endl;

        {

            int z = 3;
            cout << z << endl;
            cout << x << endl;
            cout << y << endl;
            // cout<<::x; Prints The Global Variable that's before the main function
        }
    }
    return 0;
}
/*
int main()
{
    int a = 0;
    int b = 0;
    int ba = 0;

    cout << "What is a ?" << endl;
    cin >> a;

    cout << "What is b ? " << endl;
    cin >> b;

    ba = a;
    a = b;
    b = ba;

    cout << "a is equal to " << a << endl;
    cout << "b is equal to " << b << endl;
}
*/
