#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number ."<<endl;
    cin >> number;//1010
    
    int sum=0;
    int sum2=0;
    int m=1;
    int n =0;

    while (number>0)
    {
     sum=number%10;
     n=sum*m;
     m=m*2;
     sum2=sum2+n;
      
      number/=10;
    }
    cout<< sum2;

    
}