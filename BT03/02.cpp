#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,tmp;
    cin>>n;
    int a[n];
    double t=0,s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        t=t+a[i];
        else s++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }

    cout<<a[0]<<" "<<a[n-1]<<" "<<t<<" "<<s<<endl;

    return 0;
}
