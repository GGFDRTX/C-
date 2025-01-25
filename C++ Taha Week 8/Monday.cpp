#include <bits/stdc++.h>
using namespace std;

/*
void CalculateSalary(float Bonus, float Fixed, float Absence) // This Only Works When Called in The Main Scope
{
    float Salary;
    Salary = ((Bonus + Fixed) - Absence);
    cout << "Salary = " << Salary;
}
int main()

{
    // Functions
    float Bonus, Fixed, Absence;
    cout << " Enter Your Bonus: " << endl;
    cin >> Bonus;

    cout << " Enter Your Fixed: " << endl;
    cin >> Fixed;

    cout << " Enter Your Absence: " << endl;
    cin >> Absence;
    CalculateSalary(Bonus , Fixed , Absence );
    // Void Does not return a value

*/
void CalculateSalary(int Bonus = 0, int Fixed = 0, int Absence = 0)
{
    cout << "Calculate Salary Program" << endl;

    int salary;

    cout << " Enter Your Bonus: " << endl;
    cin >> Bonus;

    cout << " Enter Your Fixed: " << endl;
    cin >> Fixed;

    cout << " Enter Your Absence: " << endl;
    cin >> Absence;
    salary = ((Bonus + Fixed) - Absence);
    cout << "Salary = " << salary << endl;
}

void Max(int A = 0, int B = 0, int C = 0) // There is No Return

{
    cout << "Max Number Program" << endl;
    cout << " Enter A: " << endl;
    cin >> A;

    cout << " Enter B: " << endl;
    cin >> B;

    cout << " Enter C: " << endl;
    cin >> C;

    if (A > B && A > C)
    {
        cout << " A " << endl;
    }
    else if (A < B && B > C)
    {
        cout << " B " << endl;
    }
    else if (B < C && C > A)
    {
        cout << " C " << endl;
    }
    else
    {
        cout << "There Is No Max Number " << endl;
    }
}

void Factorial(int bla = 0, int ble = 0, int blo = 0) // These parameters are just a step over

{
    cout << "Factorial Program" << endl;
    int num;
    int factor;
    int result;

    cout << "Enter a number" << endl;
    cin >> num;

    factor = num - 1;
    result = num * factor;

    do
    {
        result = result * --factor;
    } while (factor > 1);

    cout << result << endl;
}

int main()

{
    cout << "1- Factorial " << endl;
    cout << "2- Max Number " << endl;
    cout << "3- Calculate Salary " << endl;

    int choice;
    cin >> choice;

    
        if (choice == "Factorial" || choice == "factorial" )
        {
            Factorial();
        }
        else if (choice == "Max" || choice == "max" )
        {
            Max();
        }
        else if (choice == "Calculate Salary" || choice == "calculate salary" )
        {
            CalculateSalary();
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    
    return 0;
}
