#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        int t=0;
        if(s[i]!=' ') t++;
        else break;
        if(t==2) cout<<s[i-1]<<s[i];
    }
    return 0;
}
