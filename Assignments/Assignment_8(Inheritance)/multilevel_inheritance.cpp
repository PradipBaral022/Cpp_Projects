#include <iostream>
using namespace std;
class parent
{

public:
    parent()
    {
        cout << "Parent Constructor is called! " << endl;
    }
    ~parent()
    {
        cout << "Parent Destructor is called! " << endl;
    }
};
class child1 : public parent
{
public:
    child1()
    {
        cout << "Child1 Constructor is called! " << endl;
    }
    ~child1()
    {
        cout << "Child1 Destructor is called! " << endl;
    }
};
class child2 : public child1
{
public:
    child2()
    {
        cout << "Child2 Constructor is called! " << endl;
    }
    ~child2()
    {
        cout << "Child2 Destructor is called! " << endl;
    }
};
int main()
{
    child2 c; // Construtor is called automatically by the compiler
    // Destructor is called upon exit

    return 0;
}
/*output
Parent Constructor is called!
Child1 Constructor is called!
Child2 Constructor is called!
Child2 Destructor is called!
Child1 Destructor is called!
Parent Destructor is called!
*/
/*So from output we can verify the constructor is called from starting top and destructor is called starting from bottom*/
