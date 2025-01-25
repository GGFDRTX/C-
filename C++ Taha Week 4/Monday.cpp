#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    if (0) // if negative or positive will print the command in if elsewhere if 0 will print the command in else
        cout << "ok\n";
    else
        cout << "not okay \n";
    // if we have x =1 and y =0 and if x=y means x=o means it will print the else
    // if we have x = 1 and y = 1 and if x=y means x=1 means it will print the if
    // if we have x = -1 and y = -1 and if x=y means x=-1 means it will print the if

    int x = 8;
    if (7 > x < 10) // here 7 is not less than x so the output of x is 0 after that 0 is less than 10 so x = 1 so its true
        cout << "true\n";
    else
        cout << "Wrong";

    // Switch Statements
    char alpha;
    cin >> alpha;
    switch (alpha) // Checks only int (1,2,3) and char(A,a,B,b)
    {

    case 'A':
    case 'a':
        cout << "it is\n";
        cout << "okay to use\n";
        cout << "more than a cout\n";
        cout << "in a case\n";

        break; // To Exit The Case And not Continue

    case 'B':
    case 'b':

        cout << "line #B\n";
        break;

    case 'C':
    case 'c':

        cout << "line #C\n";
        break;

        default: // if i wrote a case thats not written it will go to default
        cout << "Not Found\n";
        break;
    }

    return 0;
}
