#include<iostream>
using namespace std;

int main()
{
	int n;
	while(n!=-1)
	{
		cin>>n;
		if(n>=0 && n%5==0) cout<<n/5<<" ";
		else if(n==-1) cout<<"bye";
	}
	return 0;
}