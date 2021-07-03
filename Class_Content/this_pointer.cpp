#include<iostream>
using namespace std;

class mobile{
    public:
    int m=10;
    void display(){
        cout << "m=" << m<< endl;
        cout << "this->" << this->m <<endl;
        cout << this<< endl;
    }

};
int main(){
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0;
}