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
class child1 : public parent
{
public:
    child1()
    {
        cout << "Child1 Constructor is called!" << endl;
    }
    ~child1()
    {
        cout << "Child1 Destructor is called!" << endl;
    }
};
class child2 : public parent
{
public:
    child2()
    {
        cout << "Child2 Constructor is called!" << endl;
    }
    ~child2()
    {
        cout << "Child2 Destructor is called!" << endl;
    }
};
int main()
{
    child2 c;
    return 0;
}
/*output
Parent Constructor is called!
Child2 Constructor is called!
Child2 Destructor is called!
Parent Destructor is called!*/
