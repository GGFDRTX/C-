#include <bits/stdc++.h>
using namespace std;
void isPalindrome(char reflectedArray[], char charArray[])
{
    for (int i = 0; i < strlen(charArray); i++)
    {

        if (charArray[i] != reflectedArray[i])
        {
            cout << "Not palindrome";
            return;
        }
    }

    cout << "Palindrome";
}

int main()
{

    string a;
    cout << "Enter a word: ";
    cin >> a;

    char charArray[a.length() + 1];

    for (int i = 0; i < a.length(); i++)
    {
        charArray[i] = a[i];
    }

    charArray[a.length()] = '\0';
    char reflectedArray[a.length() + 1];

    for (int i = 0; i < a.length(); i++)
    {
        reflectedArray[i] = charArray[a.length() - 1 - i];
    }

    reflectedArray[a.length()] = '\0';
    isPalindrome(reflectedArray, charArray);

    return 0;
}