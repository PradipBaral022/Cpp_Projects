#include <iostream>
#include <math.h>
using namespace std;

void areaOfTriangle();
int main()
{
    areaOfTriangle();
    return 0;
}
void areaOfTriangle()
{
    int a, b, c, s, area;
    cout << "Input 1st side:";
    cin >> a;
    cout << "Input 2nd side:";
    cin >> b;
    cout << "Input 3rd side:";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is:" << area << endl;
}