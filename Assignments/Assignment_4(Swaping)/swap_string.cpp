#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    char string1[30], string2[30], temp[30];
    cout << "Enter First String: ";
    cin >> string1;
    cout << "Enter Second String: ";
    cin >> string2;
    for (i = 0; (temp[i] = string1[i]) != 0; i++)
        ;
    for (i = 0; (string1[i] = string2[i]) != 0; i++)
        ;
    for (i = 0; (string2[i] = temp[i]) != 0; i++)
        ;
    cout << "The strings after swapping are:" << endl;
    cout << "First string : " << string1 << endl;
    cout << "Second string : " << string2 << endl;
    return 0;
}