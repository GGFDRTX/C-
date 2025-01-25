#include <bits/stdc++.h>
using namespace std;

void print(float b)
{
    cout << "B = " << b << endl;
}
void print(int a) // If There Is Other Function having an INT It will be directed to the first function containing An Int. Or Just Change The Function By Adding An Extra Paramater or a different Data Type
{
    cout << "A = " << a << endl;
}

inline void print(char c) // Inline (Advantages and Disadvantages)
{
    cout << "C = " << c << endl;
}
void print()
{
    static int num = 1; // Static Changes The Value Depending On The Code
    ++num;
    cout << "Num = " << num << endl;
}

int main()
{
/*
    // OverLoading Functions
    const v = 3; // Const Requires An Initialization Value
    print(3.5);
    print('A');
    print(3);
    print();
    print(); 
    print();

    */

   
/*
    int number1 = 1;
    int& number2 = number1; // Cant USE A VALUE WHILE USING THE & MUST ADD A VARIABLE CONTAINING THE VALUE 
    cout<<"Number1 = "<<number1<<endl;
    cout << "Number2 = " << number2 << endl;
    number1 = 7;
    cout << "Number1 = " << number1 << endl;
    cout << "Number2 = " << number2 << endl;
    cout<<&number1;
*/
    return 0;
}