#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A(int a = 0)
    {
        this->a = a;
    }
    void printa()
    {
        a = 6;
        cout << "Class A=" << a << endl;
    }
};
class B : virtual public A
{
protected:
    int b;

public:
    B(int b = 0)
    {
        this->b = b;
    }
    void printb()
    {
        b = 7;
        cout << "Class B=" << b << endl;
    }
};
class C : virtual public A
{
protected:
    int c;

public:
    C(int c = 0)
    {
        this->c = c;
    }
    void printc()
    {
        c = 8;
        cout << "Class C=" << c << endl;
    }
};
class D : public C, public B
{
protected:
    int d;

public:
    D(int d = 0)
    {
        this->d = d;
    }
    void printd()
    {
        cout << "Class D=" << d << endl;
    }
};
int main()
{
    D obj1(5);
    obj1.printd();
    obj1.printc();
    obj1.printb();
    obj1.printa();
    return 0;
}
/* Output
Class D=5
Class C=8
Class B=7
Class A=6
*/