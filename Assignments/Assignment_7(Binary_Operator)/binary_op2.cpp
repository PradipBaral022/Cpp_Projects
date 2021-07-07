#include <iostream>
using namespace std;

class addDistance
{
private:
    int feet, inch;

public:
    addDistance(int feet = 0, int inch = 0)
    {
        this->feet = feet;
        this->inch = inch;
    }
    addDistance operator+(addDistance& d2)
    {
        addDistance d3;
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        return d3;
    }
    void displayDistance()
    {
        cout << "Feet:" << feet << ","
             << "Inch:" << inch << endl;
    }
};
int main()
{
    addDistance d1(5, 6), d2(6, 7), d3;
    d3 = d1 + d2;
    d3.displayDistance();
    return 0;
}