#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,p,s;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    s=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<s;
    return 0;
}
