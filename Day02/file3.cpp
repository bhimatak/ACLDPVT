//Passing Values to base class using derived class obj
// Passing enum

#include <iostream>
using namespace std;

enum Day
{
    MDay=101, SDay
};

class A
{
    protected:
    int a;
    public:
    A()
    {
      a = 0;  
    }
    A(Day val)
    {
        this->a = val;
    }

};

class B: public A
{
    int b;
    public:
    B()
    {
      b = 0;  
    }
    B(Day val1, int val2): A(val1)
    {
        this->b = val2;
    }
    void disp()
    {
        cout<<"a="<<a<<"\tb="<<b<<endl;
    }
};

int main()
{
    Day s = MDay;

    B objB(s,10);
    objB.disp();
    return 0;
}