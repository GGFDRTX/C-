#include <bits/stdc++.h>
using namespace std;
string removeSpecialCharacters(const string &input)
{
    string result = "";
    for (char ch : input)
    {
        if (isalnum(ch) || isspace(ch))
        { // Only add alphanumeric characters and spaces to the result string
            result += ch;
        }
    }
    return result;
}
int countDuplicates(const string &str, char target)
{
    int charCount = 0;
    for (char ch : str)
    {
        if (toupper(ch) == toupper(target) && isalpha(ch))
        {
            charCount++;
        }
    }
    return charCount;
}

int main()
{   /*
    cout <<"2)"<<endl;

    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    // Ask the user for two letters
    char letter1, letter2;
    cout << "Enter the first letter: ";
    cin >> letter1;
    cout << "Enter the second letter: ";
    cin >> letter2;

    // Count duplicates for each letter
    int count1 = countDuplicates(userInput, letter1);
    int count2 = countDuplicates(userInput, letter2);

    // Check if the two letters have the same count of duplicates
    bool result = count1 == count2;

    cout << "Result: " << boolalpha << result << endl;
*/
    cout << "3)" << endl;

    string userInput2;
    cout << "Enter a string: ";
    getline(cin, userInput2);

    // Remove special characters
    string cleanedInput = removeSpecialCharacters(userInput2);

    // Print the cleaned string
    cout << "String without special characters: " << cleanedInput << endl;

    return 0;
}
