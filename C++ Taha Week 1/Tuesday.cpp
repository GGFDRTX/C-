#include <iostream>

/* NAMING RULES FOR VARIABLES
Case sensitive
Variable is unique
Do not use symbols in names
Do not use reserved names in c++
Do not start with Numbers
*/

// Global variables
// local variables

// cout<<sizeof(number);

using namespace std;

float Science, Math, English;


int main()
{
    cout << "Enter Your Grade of Science: ";
    cin >> Science;

    cout << "Enter Your Grade of Math: ";
    cin >> Math;

    cout << "Enter Your Grade Of English: ";
    cin >> English;

    // Calculate average

    cout << "Your Average is " << (Science + Math + English) / 3;

    return 0;
}
