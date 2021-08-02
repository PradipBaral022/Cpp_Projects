#include <iostream>
using namespace std;

template <class T>
T Large(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout << "Enter two integer numbers:";
    cin >> i1 >> i2;
    cout << "Large Integer is:" << Large(i1, i2) << endl;
    cout << "Enter two float numbers:";
    cin >> f1 >> f2;
    cout << "Large Float Number is:" << Large(f1, f2) << endl;
    cout << "Enter two characters:";
    cin >> c1 >> c2;
    cout << "Large Character is:" << Large(c1, c2) << endl;
    return 0;
}