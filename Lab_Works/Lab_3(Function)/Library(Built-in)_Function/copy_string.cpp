#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first_name[15];
    char name[15];
    cout << "Enter your 1st name:";
    cin >> first_name;
    strcpy(name, first_name);
    cout << "Your name is:" << name << endl;
}