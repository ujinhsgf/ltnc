#include<iostream>
using namespace std;

int main()
{
    int x,t=0;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0) t++;
    }
    if(t>0) cout<<"false";
    else cout<<"true";
    return 0;
}
