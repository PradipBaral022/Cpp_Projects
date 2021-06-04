/* Q. Write a program in C++ to read the record of a student (name, address, roll) and display them using structure */
#include <iostream>
using namespace std;

struct student
{
    char name[20];
    int roll_no;
    char address[20];
};

int main()
{
    student s;
    cout << "Enter the name of the student:" << endl;
    cin >> s.name;
    cout << "Enter the roll no:" << endl;
    cin >> s.roll_no;
    cout << "Enter the address:" << endl;
    cin >> s.address;
    cout << "The detail of the student is:" << endl;
    cout << "Name of the student:" << s.name << endl
         << "Roll No: " << s.roll_no << endl
         << "Address: " << s.address << endl;
}