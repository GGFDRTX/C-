#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cout << "Enter a Word: ";
    getline(cin, x);

    int vowel = 0;
    for (int i = 0; i <= x.length(); i++)
    {
        char character = x[i];
        if (character == 'o' || character == 'O')
        {
            vowel++;
        }
        else if (character == 'a' || character == 'A')
        {
            vowel++;
        }
        else if (character == 'U' || character == 'u')
        {
            vowel++;
        }
        else if (character == 'i' || character == 'I')
        {
            vowel++;
        }
        else if (character == 'e' || character == 'E')
        {
            vowel++;
        }
        else
        {
            continue;
        }
    }
    cout << "Number of Vowels: " << vowel << endl;
    return 0;
}