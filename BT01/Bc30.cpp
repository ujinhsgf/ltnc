#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(i==j) cout<<endl;
			cout<<"*";
		
		}
	}
	return 0;
}