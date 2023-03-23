#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

int main ()
{
    Point a;
    cout << &a << endl << &a.x << endl << &a.y;
    return 0;
}
