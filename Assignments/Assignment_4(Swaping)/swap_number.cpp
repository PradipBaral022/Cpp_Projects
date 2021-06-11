#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 2, temp;

    cout << "The numbers before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "The numbers after swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}