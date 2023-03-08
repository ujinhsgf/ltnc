#include<iostream>
using namespace std;

int main()
{
    double n;
    cin>>n;
    int t=(int) n;
    double x=n-t;
    if(x>=0.5) cout<<t+1;
    else cout<<t;
 return 0;
}
