#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float areaOfTriangle();
int main()
{
    float area;
    area = areaOfTriangle();
    cout << "The area of the triangle is " << area << endl;
}
float areaOfTriangle()
{
    float area, s, a, b, c;
    cout << "Input 1st side:";
    cin >> a;
    cout << "Input 2nd side:";
    cin >> b;
    cout << "Input 3rd side:";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}