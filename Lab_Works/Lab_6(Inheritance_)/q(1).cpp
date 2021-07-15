#include <iostream>
using namespace std;

class staff
{
protected:
    int code;
    string name;

public:
    void setCode(int code)
    {
        this->code = code;
    }
    void setName(string name)
    {
        this->name = name;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
    void displayCode()
    {
        cout << "Code:" << code << endl;
    }
    void displayName()
    {
        cout << "Name:" << name << endl;
    }
};
class teacher : public staff
{
protected:
    string sub;

public:
    void setSub(string sub)
    {
        this->sub = sub;
    }
    string getSUb()
    {
        return sub;
    }
    void displaySub()
    {
        cout << "Subject:" << sub << endl;
    }
};
class officer : public staff
{
protected:
    char grade;

public:
    void setGrade(char grade)
    {
        this->grade = grade;
    }
    char getGrade()
    {
        return grade;
    }
    void displayGrade()
    {
        cout << "Grade:" << grade << endl;
    }
};
class typist : public staff
{
protected:
    int speed;

public:
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
    void displaySpeed()
    {
        cout << "Typing Speed ->Words/Minute:" << speed << endl;
    }
};
class regular : public typist
{
protected:
    int salary;

public:
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    void displaySalary()
    {
        cout << "Salary in Rs:" << salary << endl;
    }
};
class casual : public typist
{
protected:
    int dailyWage;

public:
    void setDailyWage(int dailyWage)
    {
        this->dailyWage = dailyWage;
    }
    int getDailyWage()
    {
        return dailyWage;
    }
    void displayDailyWage()
    {
        cout << "Daily Wage:" << dailyWage << endl;
    }
};
int main()
{
    teacher t1, t2, t3;
    officer o1, o2;
    regular r;
    casual c;
    int select;
    char selectTypist;
    cout << "Select the category of staff to know the information:" << endl;
    cout << "For Teacher enter 1" << endl;
    cout << "For Officer enter 2" << endl;
    cout << "For Typist enter 3" << endl;
    cin >> select;
    switch (select)
    {
    case 1:
        cout << "The information of 1st Teacher:" << endl;
        t1.setCode(1);
        t1.setName("Bishika");
        t1.setSub("OOP in C++");
        t1.displayCode();
        t1.displayName();
        t1.displaySub();
        cout << "The information of 2nd Teacher:" << endl;
        t2.setCode(2);
        t2.setName("ManishM");
        t2.setSub("Electromagnetism");
        t2.displayCode();
        t2.displayName();
        t2.displaySub();
        cout << "The information of 3rd Teacher:" << endl;
        t3.setCode(3);
        t3.setName("Sanjaya");
        t3.setSub("Thermodynamics");
        t3.displayCode();
        t3.displayName();
        t3.displaySub();
        break;
    case 2:
        cout << "The information of Principle:" << endl;
        o1.setCode(4);
        o1.setName("Lallan");
        o1.setGrade('A');
        o1.displayCode();
        o1.displayName();
        o1.displayGrade();
        cout << "The information of Administrative Officer is:" << endl;
        o2.setCode(5);
        o2.setName("Romin");
        o2.setGrade('A');
        o2.displayCode();
        o2.displayName();
        o2.displayGrade();
        break;
    case 3:
        cout << "For Regular Typist enter R and for Casual Typist enter C:" << endl;
        cin >> selectTypist;
        switch (selectTypist)
        {
        case 'R':
            cout << "The information of Regular Typist:" << endl;
            r.setCode(6);
            r.setName("Bibat");
            r.setSpeed(80);
            r.setSalary(15000);
            r.displayCode();
            r.displayName();
            r.displaySpeed();
            r.displaySalary();
            break;
        case 'C':
            cout << "The information of Casual Typist:" << endl;
            c.setCode(7);
            c.setName("Ajay");
            c.setSpeed(50);
            c.setDailyWage(500);
            c.displayCode();
            c.displayName();
            c.displaySpeed();
            c.displayDailyWage();
            break;
        default:
            cout << "Enter valid Character!" << endl;
            break;
        }
    default:
        cout << "Enter the valid choice!" << endl;
        break;
    }
    return 0;
}