/*C++ program to find if an integer is even or odd or neither [Nested question: here check if the number = 0 or not. If no, then check for positive and negative value inside the main if statement]*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer:";
    cin >> n;
    if (n > 0 || n < 0)
    {
        if (n % 2 == 0)
        {
            cout << n << " is Even Number!!" << endl;
        }
        else
        {
            cout << n << "  is Odd Number!!" << endl;
        }
    }
    else
    {
        cout << "The integer is zero and it is neither even nor odd!!" << endl;
    }
    return 0;
}