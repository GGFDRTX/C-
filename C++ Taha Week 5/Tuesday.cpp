#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
/*
    cout << " Time Table" << endl;

    int number = 0;
    cout << "Enter a number" << endl;
    cin >> number;

    int multiplier = 0;

    do
    {
        int result = number * multiplier;

        cout << number << " X " << multiplier << " = " << result << endl;

        multiplier++;

    } while (multiplier < 101);
*/
    cout << "Factorial Program" << endl;

    int num;
    int factor;
    int result;

    cout << "Enter a number" << endl;
    cin >> num;
    factor = num - 1;
    result = num * factor;
    while (factor > 1)

    {

        result = result * --factor;
    }

    cout << result << endl;
    return 0;
}