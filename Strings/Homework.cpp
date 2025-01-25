#include <bits/stdc++.h>
using namespace std;
string removeSpecialChars(string str)
{
    string result;

    for (char c : str)
    {
        if (isalnum(c))
            result += c;
    }

    return result;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string biggestWord = "";
    string currentWord = "";
    for (char c : str)
    {
        if (c == ' ')
        {
            if (currentWord.length() > biggestWord.length())
            {
                biggestWord = currentWord;
            }
            currentWord = "";
        }
        else
        {
            currentWord += c;
        }
    }

    if (currentWord.length() > biggestWord.length())
    {
        biggestWord = currentWord;
    }

    cout << "The biggest word in the string is: " << biggestWord << endl;

    cout << "2)"<<endl;

    string sar = "";

    cout << "Enter a string: ";
    getline(cin, sar);

    string cleaned = removeSpecialChars(str);

    cout << cleaned << endl;

    return 0;
}
