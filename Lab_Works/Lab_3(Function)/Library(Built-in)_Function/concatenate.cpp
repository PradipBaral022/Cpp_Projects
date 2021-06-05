#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first_name[15];
    char last_name[15];
    cout << "Enter your 1st name:";
    cin >> first_name;
    cout << "Enter your last name:";
    cin >> last_name;
    cout << "Your full name is " << strcat(first_name, last_name) << endl;
    return 0;
}