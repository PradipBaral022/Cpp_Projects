#include <iostream>
using namespace std;

class unary
{
private:
    int a, b, c;

public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    //return type operator operand()
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void display()
    {
        cout << "The value of a,b,c are:" << a << endl
             << b << endl
             << c << endl;
    }
};
int main()
{
    unary u;
    u.getdata(10, 20, -5);
    u.display();
    -u;
    u.display();
}