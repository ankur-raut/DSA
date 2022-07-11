#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool f=0;
    cin>>n;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"non-prime";
            f=1;
            break;
        }
        
    }
if (f==0)
{
    cout<<"prime";
}   

    return 0;
}