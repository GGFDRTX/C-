#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    int mark;
    char A_C;
    string grade;

    cout << "Hello! Please enter your name: ";
    getline(cin, name);

    cout << "Great ! now please enter your age: ";
    cin >> age;

    cout << "Awesome !What's Your Mark: ";
    cin >> mark;

    if (mark == 100 || mark >= 95)
    {
        grade = "A+";
        cout << "Congrats !" << name << " Your Grade is A+ ";
    }
    else if (mark < 95 && mark >= 90)
    {
        grade = "A";
        cout << "Congrats !" << name << " Your Grade is A ";
    }
    else if (mark < 90 && mark >= 85)
    {
        grade = "B+";
        cout << "Congrats !" << name << " Your Grade is B+ ";
    }
    else if (mark < 85 && mark >= 80)
    {
        grade = "B";
        cout << "Congrats !" << name << " Your Grade is B ";
    }
    else if (mark < 80 && mark >= 75)
    {
        grade = "C+";
        cout << "Congrats !" << name << " Your Grade is C+ ";
    }
    else if (mark < 75 && mark >= 70)
    {
        grade = "C";
        cout << "Congrats !" << name << " Your Grade is C ";
    }
    else if (mark < 70 && mark >= 65)
    {
        grade = "D+";
        cout << "Congrats !" << name << " Your Grade is D+ ";
    }
    else if (mark < 65 && mark >= 60)
    {
        grade = "D";
        cout << "Congrats !" << name << " Your Grade is D ";
    }
    else
    {
        grade = "F";
        cout << "Sorry !, you Failed ";
    }

    cout << "Show the report [y/n]:  ";
    cin >> A_C;

    if (A_C == 'Y' || A_C == 'y')
    {
        cout << "Your Name Is: " << name << endl;
        cout << "Your Age Is: " << age << endl;
        cout << "Your Grade Is: " << mark << " (" << grade << ")\n";
        cout << "Have a nice day !! " << endl;
    }
    else if (A_C == 'n' || A_C == 'N')
    {
        cout << "Have a nice day" << endl;
    }

    return 0;
}
