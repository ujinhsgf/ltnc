#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    double t=0,s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    cout<<t/n<<endl;
    for(int i=0;i<n;i++)
    {
        s=s+pow(a[i]-t,2);
    }
    cout<<sqrt(s/n);
    return 0;
}
