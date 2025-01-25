#include <bits/stdc++.h>
using namespace std;

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
    CalculateSalary(Bonus, Fixed, Absence);
    // Void Does not return a value

    return 0;
}
