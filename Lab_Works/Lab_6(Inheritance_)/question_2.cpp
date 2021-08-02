#include <iostream>
#include <string.h>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    int getRoll(){
        return roll;
    }
    void displayName()
    {
        cout << "Name:" << name << endl;
    }
    void displayRoll()
    {
        cout << "Roll No:" << roll << endl;
    }
};
class test : virtual public student
{
protected:
    int markOfMaths;
    int markOfEnglish;

public:
    test(int markOfMaths = 0, int markOfEnglish = 0)
    {
        this->markOfMaths = markOfMaths;
        this->markOfEnglish = markOfEnglish;
    }
    void dispalyMaths()
    {
        cout << "Mark Obtained on Maths:" << markOfMaths << endl;
    }
    void displayEnglish()
    {
        cout << "Mark Obtained on English:" << markOfEnglish << endl;
    }
};
class sport : virtual public student
{
protected:
    int score;

public:
    sport(int score = 0)
    {
        this->score = score;
    }
    void displayScore()
    {
        cout << "The score on sports:" << endl;
    }
};
class result : public test, public sport
{
protected:
    int total;

public:
    result(int total = 0)
    {
        this->total = total;
    }
    void displayTotal()
    {
        total = markOfEnglish + markOfMaths + score;
        cout << "The total average is:" << total << endl;
    }
};
int main()
{
    student s1;
    s1.setName("Pradip");
    s1.setRoll(22);
    test t(85, 80);
    sport s(75);
    result r;
    r.displayTotal();
    r.getRoll();
    return 0;
}