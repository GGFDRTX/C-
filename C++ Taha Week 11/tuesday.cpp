#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[] , int size)
{
int newindex = 0;
int a=0;

for ( int i = 0; i < size ; i++)
{
    if (arr[i] > 0)
    {
        cout << arr[i] << endl;
    }
    else if (arr[i]<0)
    {
       
        newindex = arr[i];
        cout << newindex << endl;
    }
    
}
}
int main ()
{

   int arr[5]= {-1,2,-3,4,5};
   int size =( sizeof(arr) / sizeof (arr[0]) );
   bubblesort(arr , size);



return 0;
}