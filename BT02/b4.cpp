#include<iostream>
using namespace std;

int main()
{
    long long x,y,n;
    cin>>x>>y;
    n=x*y;
    if(x*y!=0)
    {
        if(x>y) x=x%y;
        else if(x<y) y=y%x;
    }
    cout<<n/y;
    return 0;
}

