#include <iostream>
#include <math.h>
using namespace std;

void areaOfTriangle(float, float, float);
int main()
{
    float a, b, c;
    cout << "Input 1st side:";
    cin >> a;
    cout << "Input 2nd side:";
    cin >> b;
    cout << "Input 3rd side:";
    cin >> c;
    areaOfTriangle(a, b, c);
    return 0;
}
void areaOfTriangle(float d, float e, float f) //Here a, b, c can also be used
{
    float s, area;
    s = (d + e + f) / 2;
    area = sqrt(s * (s - d) * (s - e) * (s - f));
    cout << "The area of the triangle is:" << area << endl;
}