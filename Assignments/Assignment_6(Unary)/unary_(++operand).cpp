#include <iostream>
using namespace std;

class increment
{
private:
    int n;

public:
    void getincrement(int n = 0)
    {
        this->n = n;
    }
    void operator++()
    {
        n = ++n;
    }
    void display()
    {
        cout << "The pre increment of given number is:" << n << endl;
    }
};
int main()
{
    increment i;
    i.getincrement(5);
    ++i;
    i.display();
    return 0;
}