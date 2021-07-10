#include <iostream>
using namespace std;

class parent
{
public:
    parent()
    {
        cout << "Parent Constructor is called!" << endl;
    }
    ~parent()
    {
        cout << "Parent Destructor is called!" << endl;
    }
};
class child1
{
public:
    child1()
    {
        cout << "Child1 constructor is called!" << endl;
    }
    ~child1()
    {
        cout << "Child1 constructor is called!" << endl;
    }
};
class child2 : public child1, public parent
{
public:
    child2()
    {
        cout << "Child2 constructor is called!" << endl;
    }
    ~child2()
    {
        cout << "Child2 constructor is called!" << endl;
    }
};
int main()
{
    child2 c;
    return 0;
}
/* Child1 constructor is called!
Parent Constructor is called!
Child2 constructor is called!
Child2 constructor is called!
Parent Destructor is called!
Child1 constructor is called! */