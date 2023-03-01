#include<iostream>
using namespace std;

int main()
{
    double f,c,k;
    cin>>f;
    c=(f-32)*5/9;
    k=c+273.15;
    cout<<"f      c       k"<<endl;
    cout<<f<<" "<<c<<" "<<k;
    return 0;
}

