#include <iostream> // # is named "preprocessing"  // include is the "processing directive" // #include I is The "Input" // O is the "output"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    int radius;

    cout << "Enter The Circle radius" << endl;
    cin >> radius;

    float area = 3.14 * (radius * radius);
    float perimeter = 2 * 3.14 * radius;

    cout << " perimeter : " << perimeter << endl;
    cout << " area : " << area;

    return 0;
}