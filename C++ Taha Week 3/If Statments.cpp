#include <iostream>
using namespace std;

int main()

{
      // Short Hand if

      int number = 10;
      cin >> number;
      // (condition) code will be executed if true : code will be executed if false
      // cout << (number == 7) ? true : false;
      // if true will print (true and 1) and if false will print (false and 0)

      (number >= 10) ? cout << "Number is greater than 10\n" : cout << "number is less than 10\n";

      int x = (5 < 7) ? 1 : 2;
      cout << x;
      
      return 0;
}