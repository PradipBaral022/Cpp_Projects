#include <iostream>
using namespace std;

class sumOfArray
{
private:
    int n, i, a[10], sum = 0;

public:
    sumOfArray()
    {
        cout << "Enter the number of elements of array:";
        cin >> n;
        cout << "Enter the elements of array:";
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void sumArray()
    {
        for (i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << "The sum of each element of array is:" << sum << endl;
    }
};
int main()
{
    sumOfArray s1;
    s1.sumArray();
    return 0;
}