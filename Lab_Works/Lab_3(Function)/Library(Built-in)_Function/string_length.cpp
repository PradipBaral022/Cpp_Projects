#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int len;
    char name[15];
    cout << "Enter your name:";
    cin >> name;
    len = strlen(name);
    cout << "The length of your name is:" << len << endl;
    return 0;
}