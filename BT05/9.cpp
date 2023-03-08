#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int GetRandom(int min,int max)
{
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main()
{
    int n;
    cin>>n;
    srand((unsigned int)time(NULL));
    cout << GetRandom(1,n)<<endl;

 return 0;
}

