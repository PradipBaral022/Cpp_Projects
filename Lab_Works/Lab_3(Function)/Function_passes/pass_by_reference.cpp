#include <iostream>
using namespace std;

void function_first(int a)
{
    cout << "The value of a before altering is:" << a << endl;
    a = 5;
    cout << "The value of a after altering is:" << a << endl;
}
void function_reference(int &b)
{
    b = 20;
    cout << "The value of b is:" << b << endl;
}

int main()
{
    int a = 1;
    int b = 2;
    function_first(a);
    function_reference(b);
    cout << "The value of a in main is:" << a << endl;
    cout << "The value of b in main is:" << b << endl;
}