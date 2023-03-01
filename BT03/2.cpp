#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int t=0,n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-1-i])
        {
            t++;
        }
    }
    if(t==n/2) cout<<"yes";
    else cout<<"no";
    return 0;
}
