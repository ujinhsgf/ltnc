#include<iostream>
using namespace std;

int main()
{
    int a[500];
    int n,t=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t=t+a[i];
    }
    t=t/n;
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    cout<<"mean: "<<t<<endl;
    cout<<"max: "<<a[0]<<endl;
    cout<<"min: "<<a[n-1];
    return 0;
}