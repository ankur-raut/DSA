#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int c=1;
    for (int i = n; i>=1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<c;
            c++;
        }
        c=1;
        cout<<endl;
        /*
        or
        for (int j = 1; j < n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        */
        
    }
    
    return 0;
}