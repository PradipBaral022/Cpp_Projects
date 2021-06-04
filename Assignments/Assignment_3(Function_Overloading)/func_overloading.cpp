#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "The addition is:" << a + b << endl;
}
void add(double a, int b1, double c)
{
    cout << "The addition is:" << a + b1 + c << endl;
}
void add(int a1, double b)
{
    cout << "The addition is:" << a1 + b << endl;
}
int main()
{
    add(1, 2);
    add(1.2, 2, 3.4);
    add(1, 5.6);
    return 0;
}