#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=i+1;j<n;j++)
        {
          if(a[i]==a[j]) t++;

        }
        cout<<a[i]<<" "<<t<<endl;;
    }
    return 0;
}
