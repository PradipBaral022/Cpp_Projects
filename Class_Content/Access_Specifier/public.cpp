#include <iostream>
using namespace std;

class area
{
public:
    int radius;
    double area_cylinder()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    area a;
    a.radius = 5;
    cout << "The area of the cylinder is:" << a.area_cylinder() << endl;
}