#include<iostream>
using namespace std;

int ucln(int x,int y)
{
    while(x*y!=0)
    {
        if(x>y) x=x%y;
        else  y=y%x;
    }
    return x+y;
}
int main()
{
    int n,m;
    cin>>n>>m;

    cout<<ucln(n,m);;
    return 0;
}
