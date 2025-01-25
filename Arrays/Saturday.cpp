#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 5;
    /*int arr[c];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    cout << arr[2] + arr[3] << endl;
    int arrr = {1,2,3,4,5,6,7}
    */
    const int sizearr = 7;
    int sume = 0, sumo = 0;
    int arr[7]={100,45,4564,4564,8,454,8};
    /*for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sume += arr[i];

        }
        else
            sumo += arr[i];

    cout << "Sum Even = " << sume << endl;
    cout << "Sum odd = " << sumo << endl;
    */

   /* int max = 0;  // Find The Max Number 
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    cout << "max = "<<max<<endl;
    */
/*
     int arrsearch[6] = { 11,19,7,53,88,44};
     int element;
     cout << "Enter Element u Want To Search for "<<endl;
     cin >>element;
     bool found = false ;
     int i;
     for ( i = 0 ; i < 6 ; i++)
     {
        if (arrsearch[i] == element)
        {
        found = true ;
        break;
        }
     }
     if (found==true)
     cout << " Found number is in index  "<< i<<endl;
     else 
     cout << "Number not Found "<<endl;
*/ int min = arr[0]; // Find The min Number

     for (int i = 0; i < 7; i++)
     {
         if (arr[i] < min)
         {
             min = arr[i];
         }
        
    }
    cout << "Minimum = "<<min<<endl;
    
   return 0;
}