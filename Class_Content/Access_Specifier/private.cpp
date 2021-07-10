#include <iostream>
using namespace std;

class area
{
private:
    double radius;

public:
    area(int radius)
    {
        this->radius = radius;
    }
    double area_cylinder()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    area a(5);
    cout << "The area of the cylinder is:" << a.area_cylinder() << endl;
}