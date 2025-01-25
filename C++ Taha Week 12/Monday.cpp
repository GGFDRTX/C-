#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Array Of Strings
    string X[] = {"Padas", "Packed", "Pace", "Pacha"};

    // Fix one string for comparison
    string fString = X[0];

    int sCPrefix = fString.length();

    // Compare each string to the fixed string
    for (int i = 1; i < sizeof(X) / sizeof(X[0]); i++)
    {
        int cPrefix = 0;
        while (cPrefix < fString.length() && cPrefix < X[i].length() && fString[cPrefix] == X[i][cPrefix])
        {
            cPrefix++;
        }

        // Update the smallest common prefix
        sCPrefix = min(sCPrefix, cPrefix);
    }

    // Cout the common prefix letters
    cout << "Common Prefix: ";
    for (int i = 0; i < sCPrefix; i++)
    {
        cout << fString[i];
    }
    cout << endl;

    return 0;
}
