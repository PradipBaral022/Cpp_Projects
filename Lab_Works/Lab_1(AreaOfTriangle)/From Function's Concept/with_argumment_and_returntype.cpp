#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float areaOfTriangle(float, float, float);
int main()
{
    float a, b, c, area;
    cout << "Input 1st side:";
    cin >> a;
    cout << "Input 2nd side:";
    cin >> b;
    cout << "Input 3rd side:";
    cin >> c;
    area = areaOfTriangle(a, b, c);
    cout << "The area of the traingle is:" << area << endl;
}
float areaOfTriangle(float a, float b, float c)
{
    float area, s;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}