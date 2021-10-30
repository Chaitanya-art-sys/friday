#include<iostream>
using namespace std;
int main()
{
    //WAP to print different patterns
    //Pattern 1
    int a;
    cout<<"Enter the no. of rows: ";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        { cout<<"*"; }
        cout<<"\n";
    }
    cout<<"\n\n";
    //Pattern 2
    int b=a;
    for(int i=0;i<a;i++)
    {
        for(int j=b;j>0;j--)
        {   cout<<"*";  }
        b--;
        cout<<"\n";
    }
    cout<<"\n\n";
    //Pattern 3
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(j==a/2)
            {
                if(i==a/2) 
                {
                    cout<<" ";
                    continue;
                }
            }
            cout<<"*";
        }
        cout<<"\n";

    }
    return 0;
}