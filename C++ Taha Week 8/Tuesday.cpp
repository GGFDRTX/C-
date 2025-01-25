#include <bits/stdc++.h>
using namespace std;

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }

    else if (num2 > num1)
    {
        result = num2;
    }

    else
    {
        result = num1;
    }

    cout << "Result = " << result << endl;
    return result;
    // Add a return statement here
}
int main()

{
    int num1;
    int num2;
    cout << "Enter Number 1 " << endl;
    cin >> num1;

    cout << "Enter Number 2 " << endl;
    cin >> num2;

    max(num1, num2);
    return 0;
}
