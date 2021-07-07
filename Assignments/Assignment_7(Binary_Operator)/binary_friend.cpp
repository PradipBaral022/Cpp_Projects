#include <iostream>
using namespace std;

class addDistance
{
private:
    int inch, feet;

public:
    addDistance(int feet = 0, int inch = 0)
    {
        this->feet = feet;
        this->inch = inch;
    }
    // Declaring friend function using friend keyword
    void display()
    {

        cout << "Feet:" << feet << ","
             << "Inch:" << inch << endl;
    }
    friend addDistance operator+(addDistance &, addDistance &);
};

// Implementing friend function with two parameters
addDistance operator+(addDistance &d1, addDistance &d2) // Call by reference
{
    // Create an object to return
    addDistance d3;

    // Perform addition of feet and inches
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.feet;
    return d3;
}

int main()
{
    addDistance d1(5, 6), d2(4, 8), d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}