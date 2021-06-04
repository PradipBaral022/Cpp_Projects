//C++ program to find the sum of first n natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    int sum = 0;
    cout << "Enter any +ve number:";
    cin >> n;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "The sum is:" << sum << endl;
}