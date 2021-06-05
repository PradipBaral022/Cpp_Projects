#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char string1[20];
    char string2[20];

    cout << "Enter any string 1: ";
    cin >> string1;

    cout << "Enter any string 2: ";
    cin >> string2;

    if (strcmp(string1, string2) == 0) //Here during comparing it also compare cases!
    {
        cout << "Strings are same:" << endl;
    }
    else
    {
        cout << "Strings are different" << endl;
    }
}