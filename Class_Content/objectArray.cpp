#include <iostream>
using namespace std;

class myClass
{
private:
    int x;

public:
    void setx(int i)
    {
        x = i;
    }
    int getx()
    {
        return x;
    }
};
int main()
{
    myClass classes[4]; //array of object
    for (int i = 0; i < 4; i++)
    {
        classes[i].setx(i);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "classes[" << i << "]: " << classes[i].getx() << endl;
    }
    return 0;
}