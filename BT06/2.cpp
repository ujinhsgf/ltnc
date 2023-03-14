#include<bits/stdc++.h>
using namespace std;

void hoanvi(int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
    xuat(a,n);
    do
    {
        int k=n-2;
        while(k>=0 && a[k]>a[k+1])
        {
            k--;
        }
        if(k<0) break;
        int l=n-1;
        while(a[l]<a[k])
        {
            l--;
        }
        swap(a[l],a[k]);
        latnguoc(a,k+1,n-1);
        xuat(a,n);
    }while(true);
}
void latnguoc(int a[], int x,int y)
{
    while(x<y)
    {
        swap(a[x],a[y]);
        x++;
        y--;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
	hoanvi(n);
    return 0;
}
