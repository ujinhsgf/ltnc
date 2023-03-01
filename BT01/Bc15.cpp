#include<iostream>
using namespace std;

int main()
{
    string f0,f1,fn;
    f0="b";
    f1="a";
    for(int i=3;i<=10;i++)
    {
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
    cout<<fn;
    return 0;
}
