#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, s, areaOfTriangle;
    cout << "Enter the 1st side of triangle:";
    cin >> a;
    cout << "Enter the second side of triangle:";
    cin >> b;
    cout << "Enter the third side of the triangle:";
    cin >> c;
    s = (a + b + c) / 2;
    areaOfTriangle = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is " << areaOfTriangle << endl;
    return 0;
}