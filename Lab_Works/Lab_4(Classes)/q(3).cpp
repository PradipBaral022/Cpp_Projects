/*WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided*/
#include <iostream>
using namespace std;

class simpleInterest
{
public:
    double simpleinterest(double principal, double time, double rate = 0.15)
    {
        return (principal * time * rate) / 100;
    }
};
int main()
    simpleInterest si;
double p, t, si_value;
cout << "Enter Principal:" << endl
     << "Enter time:" << endl;
cin >> t >> p;
si_value = si.simpleinterest(p, t);
cout << "The simple interest is:" << si_value << endl;
return 0;
}