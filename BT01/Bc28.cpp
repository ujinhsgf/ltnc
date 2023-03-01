#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=24;i++)
	{
		if(i==1) cout<<"12midnight"<<endl;
		else if(i>1&&i<13) cout<<i-1<<"am"<<endl;
		else if(i==13) cout<<"12moon"<<endl;
		else cout<<i-13<<"pm"<<endl;
	}
	
	return 0;
}