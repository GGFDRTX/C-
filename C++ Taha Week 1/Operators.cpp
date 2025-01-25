#include <iostream>
using namespace std;
int main()
{
     /*
     operators
     a*=10 ==> a=a*10
     a/=10
     a+=10
     a-=10
     a%=10
     */
     /*
     int a = 0;
     cin >> a;
     a *=10;
     cout << a;
     */
     /*
     postfix
     prefix
     */
     // int number = 3;
     //++number ; //prefix
     // number++;// postfix
     //  cout << ++number<<endl;// prefix => increment then print
     // cout << ++number<<endl;// postfix => print then increment

     /*
     int number1 = 0, number2 = 0;
          number2 = ++number1; //number2 =1
          number2 = number1++; //number2 =1+1
          number2 = ++number1 + ++number1; //number2 = 3 + 3
          number2 = ++number1 + number1++; //number2 = 4+3
          number2 = number1++ + number1--;// number2 = 6+7
          cout << number1 << endl;
          cout << number2 << endl;
     */

     // comparison operators

     /*

          == equal
          !=  not equal
          >=
          <=

     */

     int x = 5, y = 5;
     cout << (x == y) << endl; // true>=1
     cout << (x >= y) << endl; // TRUE>=1
     cout << (x != y) << endl; // false>=0
     cout << (x <= y) << endl; // true>=1

     // logical operators
     /*
     &&
     ||
     !
     */
     /*/
          int x = 5;
          int y = 3;

          cout << (x > 8 && x < 10);//false>=0
          cout << (x > 8 || x < 10);//True>=1
          cout << (!(x > 8 || x < 10)); // false>=0
          /*
          */
}
