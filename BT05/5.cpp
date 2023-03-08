#include<iostream>
#include<cmath>
using namespace std;

bool snt(int x)
{
    int t=0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0) t++;
    }
    if(t==0) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(snt(i)==true) cout<<i<<" ";
    }
    return 0;
}
