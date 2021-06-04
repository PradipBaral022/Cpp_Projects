//Program to print positive number entered by the user.
//Program to check whether an integer is positive or negative.
//Program to check whether an integer is positive, negative or zero.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer:";
    cin >> n;
    if (n > 0)
    {
        cout << n << " is a positive number!" << endl;
    }
    else if (n < 0)
    {
        cout << n << " is a negative number!" << endl;
    }
    else
    {
        cout << "Integer is zero!" << endl;
    }
}