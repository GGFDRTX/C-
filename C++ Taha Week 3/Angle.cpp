#include <iostream> // # is named "preprocessing"  // include is the "processing directive" // #include I is The "Input" // O is the "output"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    int Angle1;
    int Angle2;

    cout << "Enter Angle 1 " << endl;
    cin >> Angle1;

    cout << "Enter Angle 2 " << endl;
    cin >> Angle2;

    cout << "THe THird angle =" << endl
         << (180 - (Angle1 + Angle2));

    return 0;
}