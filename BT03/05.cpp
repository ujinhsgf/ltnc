#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int sv,tb;
	cin>>sv;
	int a[100][3];
	for(int i=0;i<sv;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"diem theo mon toan"<<endl;
	cout<<"             toan  ly  anh"<<endl;
	for(int i=0;i<sv;i++)
	{
		for(int k=i+1;k<sv;k++)
		{
			if(a[i][0]<a[k][0])
			{
				swap(a[i][0],a[k][0]);
				swap(a[i][1],a[k][1]);
				swap(a[i][2],a[k][2]);
			}
		}
	}
	for(int i=0;i<sv;i++)
	{

		cout<<"sinh vien "<<i<<"   "<<a[i][0]<<"   "<<a[i][1]<<"   "<<a[i][2]<<endl;
		
	}
	cout<<"diem theo mon ly"<<endl;
	cout<<"             toan  ly  anh"<<endl;
	for(int i=0;i<sv;i++)
	{
		for(int k=i+1;k<sv;k++)
		{
			if(a[i][1]<a[k][1])
			{
				swap(a[i][0],a[k][0]);
				swap(a[i][1],a[k][1]);
				swap(a[i][2],a[k][2]);
			}
		}
	}
	for(int i=0;i<sv;i++)
	{

		cout<<"sinh vien "<<i<<"   "<<a[i][0]<<"   "<<a[i][1]<<"   "<<a[i][2]<<endl;
		
	}
	cout<<"diem theo trung binh"<<endl;
	cout<<"             tb  toan  ly  anh"<<endl;
	for(int i=0;i<sv;i++)
	{
		for(int k=i+1;k<sv;k++)
		{
			if(a[i][1]<a[k][1])
			{
				swap(a[i][0],a[k][0]);
				swap(a[i][1],a[k][1]);
				swap(a[i][2],a[k][2]);
			}
		}
	}
	for(int i=0;i<sv;i++)
	{

		cout<<"sinh vien "<<i<<"   "<<(a[i][0]+a[i][1]+a[i][2])/3<<"   "<<a[i][0]<<"   "<<a[i][1]<<"   "<<a[i][2]<<endl;
		
	}
	return 0;
}
