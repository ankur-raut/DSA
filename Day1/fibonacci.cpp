#include<iostream>
using namespace std;

int fib(int n){
    int t1=0,t2=1;
    int next;
    cout<<t1<<t2;
    next=t1+t2;
    for (int i = 1; i < n; i++)
    {
        cout<<next;
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    
}
int main()
{
    int n;
    cin>>n;

    fib(n);
    
    
    return 0;
}