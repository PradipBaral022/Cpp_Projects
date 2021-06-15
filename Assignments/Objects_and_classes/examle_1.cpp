#include <iostream>
using namespace std;

//Create a class
class Room
{

public:
    double length;
    double height;
    double breadth;

    double calculateArea()
    {
        return length * height;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};
int main()
{
    //create object of Room class
    Room room1;
    //assign valiues to data numbers
    room1.length = 42.5;
    room1.breadth = 30.7;
    room1.height = 19.7;

    //calculate and display the area and volume
    cout << "Area of Room is:" << room1.calculateArea() << endl;
    cout << "Volume of Room is:" << room1.calculateVolume() << endl;
    return 0;
}