#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int number;

    cout << " Please Enter The Number" << endl;

    cin >> number;

    if (number % 2 == 0)
    {
        if (number < 50)
        {
            cout << "This Number is Even But It Is Less Than 50" << endl;
        }
        else
        {
            cout << "This number is even" << endl;
        }
    }

    else if (number == 0)
    {
        cout << "This Number is equal to zero" << endl;
    }
    else
    {
        cout << "This Number is Odd" << endl;
    }

    int num1;
    int num2;
    int num3;

    cout << "Enter Number 1" << endl;
    cin >> num1;

    cout << "Enter Number 2" << endl;
    cin >> num2;

    cout << "Enter Number 3" << endl;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number One Is the Greatest Number" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Number Two Is the Greatest Number" << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "Number Three Is the Greatest Number" << endl;
    }

    string Username = "Fady2006";
    string Password = "F123";
    string User;
    string pass;

    cout << "Enter Your Username" << endl;
    cin >> User;
    if (User == Username)
    {
        cout << "Enter Your Password" << endl;
        cin >> pass;
        if (pass == Password)
        {
            cout << "Login Successfully" << endl;
        }
        else if (pass != Password)
        {
            cout << "Login Failed Password is incorrect" << endl;
        }
    }
    else if (User != Username)
    {
        cout << "Username is Incorrect" << endl;
    }

    return 0;
}