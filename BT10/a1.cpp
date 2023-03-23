#include<iostream>
using namespace std;

struct Point{
double x;
double y;
};
void print(Point v) {

cout << "(" << v.x << "," << v.y << ")";
int main() {

double a,b;
cin>>a>>b;
cout<<Point(a,b);
return 0;

}

