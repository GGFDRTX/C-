#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string exercises;
    cout << "Choose A Program" << endl;

    cout << "1- Hour" << endl;
    cout << "2- Calculator" << endl;
    cout << "3- Grading" << endl;
    cout << "4- Determine The Triangle" << endl;
    cout << "5- Voting" << endl;
    cout << "6- Weekdays" << endl;
    cout << "7- Area Calculator" << endl;

    cin >> exercises;

    if (exercises == "Hour" || exercises == "hour")
    {
        cout << "Welcome To The Hour Program\n";

        int x;
        cout << "Enter The Hour\n";
        cin >> x;

        if (x >= 0 && x <= 11)
        {
            cout << "Good Morning\n";
        }
        else if (x >= 12 && x <= 17)
        {
            cout << "Good Afternoon\n";
        }
        else if (x >= 18 && x <= 23)
        {
            cout << "Good Evening\n";
        }
        else
            cout << "Wrong Hour Format\n";
    }
    else if (exercises == "Calculator" || exercises == "calculator")
    {
        cout << "Welcome To The Calculator Program\n";

        int Number1;
        int Number2;
        char Operator;

        cout << "Enter Number 1\n";
        cin >> Number1;
        cout << "Enter Number 2\n";
        cin >> Number2;
        cout << "Enter The Operator +-/*\n";
        cin >> Operator;

        if (Operator == '+')
        {
            cout << Number1 + Number2 << endl;
        }
        else if (Operator == '-')
        {
            cout << Number1 - Number2 << endl;
        }
        else if (Operator == '/')
        {
            cout << Number1 / Number2 << endl;
        }
        else if (Operator == '*')
        {
            cout << Number1 * Number2 << endl;
        }
    }
    else if (exercises == "Grading" || exercises == "grading")
    {
        cout << "Welcome To The Grading Program\n";

        string name;
        int age1;
        int mark;
        char A_C;
        string grade;

        cout << "Hello! Please enter your name: " << endl;
        cin >> name;

        cout << "Great! Now please enter your age: " << endl;
        cin >> age1;

        cout << "Awesome! What's Your Mark: " << endl;
        cin >> mark;

        if (mark == 100 || mark >= 95)
        {
            grade = "A+";
            cout << "Congrats, " << name << "! Your Grade is A+" << endl;
        }
        else if (mark < 95 && mark >= 90)
        {
            grade = "A";
            cout << "Congrats, " << name << "! Your Grade is A" << endl;
        }
        else if (mark < 90 && mark >= 85)
        {
            grade = "B+";
            cout << "Congrats, " << name << "! Your Grade is B+" << endl;
        }
        else if (mark < 85 && mark >= 80)
        {
            grade = "B";
            cout << "Congrats, " << name << "! Your Grade is B" << endl;
        }
        else if (mark < 80 && mark >= 75)
        {
            grade = "C+";
            cout << "Congrats, " << name << "! Your Grade is C+" << endl;
        }
        else if (mark < 75 && mark >= 70)
        {
            grade = "C";
            cout << "Congrats, " << name << "! Your Grade is C" << endl;
        }
        else if (mark < 70 && mark >= 65)
        {
            grade = "D+";
            cout << "Congrats, " << name << "! Your Grade is D+" << endl;
        }
        else if (mark < 65 && mark >= 60)
        {
            grade = "D";
            cout << "Congrats, " << name << "! Your Grade is D" << endl;
        }
        else
        {
            grade = "F";
            cout << "Sorry, " << name << ", you Failed" << endl;
        }

        cout << "Show the report [y/n]: ";
        cin >> A_C;

        if (A_C == 'Y' || A_C == 'y')
        {
            cout << "Your Name Is: " << name << endl;
            cout << "Your Age Is: " << age1 << endl;
            cout << "Your Grade Is: " << mark << " (" << grade << ")" << endl;
            cout << "Have a nice day, " << name << "!" << endl;
        }
        else if (A_C == 'n' || A_C == 'N')
        {
            cout << "Have a nice day" << endl;
        }
    }
    else if (exercises == "Determine The Triangle" || exercises == "determine the triangle")
    {
        cout << "Welcome To The Triangle Program\n";

        int Angle1;
        int Angle2;
        int Angle3;

        cout << "Enter Angle 1: ";
        cin >> Angle1;

        cout << "Enter Angle 2: ";
        cin >> Angle2;

        cout << "Enter Angle 3: ";
        cin >> Angle3;

        int total = Angle1 + Angle2 + Angle3;

        if (Angle1 == Angle2 && Angle2 == Angle3)
        {
            cout << "This Triangle Is Equatorial" << endl;
        }
        else if (Angle1 != Angle2 && Angle2 != Angle3 && Angle1 != Angle3)
        {
            cout << "This Triangle Is Scalene" << endl;
        }
        else
        {
            cout << "This Triangle Is Isosceles" << endl;
        }
    }
    else if (exercises == "Voting" || exercises == "voting")
    {
        cout << "Welcome To The Voting Program\n";
        int age;

        cout << "What is Your Age: ";
        cin >> age;

        if (age < 18)
        {
            cout << "You Are Not Eligible To Vote" << endl;
        }
        else
        {
            cout << "You Are Eligible To Vote" << endl;
        }
    }
    else if (exercises == "Weekdays" || exercises == "weekdays")
    {
        cout << "Welcome To The WeekDays Program\n";

        int Number;
        cout << "Enter a Number (1-7): ";
        cin >> Number;

        switch (Number)
        {
        case 1:
            cout << "It is Sunday (S)" << endl;
            break;
        case 2:
            cout << "It is Monday (M)" << endl;
            break;
        case 3:
            cout << "It is Tuesday (Tue)" << endl;
            break;
        case 4:
            cout << "It is Wednesday (W)" << endl;
            break;
        case 5:
            cout << "It is Thursday (Thu)" << endl;
            break;
        case 6:
            cout << "It is Friday (F)" << endl;
            break;
        case 7:
            cout << "It is Saturday (Sat)" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    else if (exercises == "Area Calculator" || exercises == "area calculator")
    {
        cout << "Welcome To The Area Calculator Program\n";

        string Choice;
        cout << "What is The Figure You Want To Calculate Its Area (Circle, Triangle, Square): ";
        cin >> Choice;

        if (Choice == "Triangle" || Choice == "triangle")
        {
            cout << "How Much Is The Base? ";
            float base_Triangle;
            cin >> base_Triangle;

            cout << "How Much Is The Height? ";
            float Height_T;
            cin >> Height_T;

            float area_T = (0.5 * base_Triangle * Height_T);
            cout << "Triangle Area Is Equal to " << area_T << endl;
        }
        else if (Choice == "Square" || Choice == "square")
        {
            cout << "What is The Length of The Square? ";

            float Square_Length;
            cin >> Square_Length;

            float area_S = (Square_Length * Square_Length);
            cout << "Square Area Is Equal to " << area_S << endl;
        }
        else if (Choice == "Circle" || Choice == "circle")
        {
            float radius;
            cout << "Enter The Circle Radius: ";
            cin >> radius;
            float area = (3.14 * radius * radius);
            cout << "Circle Area is Equal to " << area << endl;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}
