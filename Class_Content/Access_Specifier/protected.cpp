#include <iostream>
using namespace std;

class parent
{
protected:
    int id_protected;
};
class child : public parent
{
public:
    void setId(int id)
    {
        id_protected = id;
    }
    void display()
    {
        cout << "The id_protected is:" << id_protected << endl;
    }
};
int main()
{
    child obj1;
    obj1.setId(22);
    obj1.display();
    return 0;
}