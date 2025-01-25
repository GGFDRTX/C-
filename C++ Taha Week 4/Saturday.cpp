#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  // Loops
  // While loops

  int num = 0;
  while (num < 100)
    ;
  {
    cout << num << endl;
    num++; // or num +=1;

  }                    // Will Print The command 3 Times but it will be infinite also because num is always equal to 0 so we need to add a prefix ++ or --
  cout << num << endl; // it wont print it until it finishes the loops as the ide works line by line
  
  /*
   int x = 0;
   int degree = 0;
   int sum = 0;

   // Do Loops

   do
   {
     cout << "Enter degree: " << endl;
     cin >> degree;
     sum += degree; // sum = sum + degree;
     x++; // or num +=1;
   } while (x < 3);
   cout << sum << endl; // when x isn't less than 3 then it will print sum
 */

  {
    unsigned long long int n, sum = 0, m;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
      m = n % 10;
      sum = sum + m;
      m /= 10;
      n = n / 10;
    }
    cout << "Sum is= " << sum << endl;
    return 0;
  }

  return 0;
}