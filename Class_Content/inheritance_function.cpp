#include <iostream>
using namespace std;

class parent
{
public:
    void print()
    {
        cout << "Result of parent class is printed!" << endl;
    }
};
class child : public parent
{
public:
    void print()
    {
        cout << "Result of child class is printed" << endl;
    }
};
int main()
{
    child c;
    c.print();
    c.parent::print();
    return 0;
}
/* Result of child class is printed
Result of parent class is printed! */