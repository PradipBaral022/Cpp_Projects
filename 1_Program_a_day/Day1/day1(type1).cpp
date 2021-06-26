//Sum of elements of array
#include <iostream>
using namespace std;

class sumOfArray
{
private:
    int i, sum = 0, a[10];

public:
    sumOfArray()
    {
        cout << "Enter any 10 elements of arrays:";
        for (i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
    }
    void sumArray()
    {
        for (i = 0; i < 10; i++)
        {
            sum += a[i];
            cout << "The sum of the array upto " << a[i] << "th element is:" << sum << endl;
        }
    }
};
int main()
{
    sumOfArray s1;
    s1.sumArray();
    return 0;
}