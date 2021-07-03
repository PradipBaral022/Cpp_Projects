#include <iostream>
using namespace std;

class First
{
private:
    int a;
    static int b;

public:
    First(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    static void display()
    {
        //cout << a;
        cout << b << endl;
    }
};
int First::b;
int main()
{
    First obj1(10, 20);
    obj1.show();
    obj1.display();
    First obj2(100, 200);
    obj2.show();
    obj1.show();
    obj2.display();
    return 0;
}