#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[15];
    cout << "Enter your name:";
    cin >> name;
    cout << "The reverse of your name is:" << strrev(name) << endl;
    return 0;
}