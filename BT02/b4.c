#include<iostream>
using namespace std;

int main()
{
    long long x,y;
    if(x*y!=0)
    {
        if(x>y) x=x%y;
        else y=y%x;
    }
    cout<<x;
    return 0;
}

