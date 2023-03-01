#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100][100];
    a[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<10)
            {   a[i][j+1]=a[i][j]+1;
                a[i+1][j]=a[i][j]+1;
            }
            else if(a[i][j]>=10)
            {
                a[i][j+1]=a[i][j]-9;
                a[i+1][j]=a[i][j]-9;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
            if(j==n-1) cout<<endl;
        }
    }
    return 0;
}

