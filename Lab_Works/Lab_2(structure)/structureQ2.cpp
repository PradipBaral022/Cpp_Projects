/* Q. Write a program to read the record of 3 students(name, address and roll) and display the
record using structure in C++. */
#include <iostream>
using namespace std;

struct students
{
    char name[20];
    char address[20];
    int roll_no;
};
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        students s[3];
        cout << "Enter the details of student " << i + 1 << ":" << endl;
        cout << "Enter the name of the student:";
        cin >> s[i].name;
        cout << "Enter the roll no:";
        cin >> s[i].roll_no;
        cout << "Enter the address:";
        cin >> s[i].address;
    }
    for (i = 0; i < 3; i++)
    {
        students s[3];
        cout << "The detail of the student " << i + 1 << "is: " << endl;

        cout << "Name: " << s[i].name << endl
             << "Roll No: " << s[i].roll_no << endl
             << "Address: " << s[i].address << endl;
    }
}