#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int t=s.size();
    int k=0;
    for(int i=0;i<t;i++)
    {
        k=k+s[i]-48;
    }
    cout<<k;
    return 0;
}
