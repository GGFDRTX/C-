#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numRows=1;
    cin>>numRows;
    int num=1;
    for (int i=1;i<numRows;i++)
    {
        for (int k=numRows;k>0;k--)
        {
            cout<<" ";
        }
        for (int j=1;j<=numRows;j++)
        {
            cout <<num;
            num++;

        }
        cout<<endl;
    }
}

