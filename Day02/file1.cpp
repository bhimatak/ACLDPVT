//Passing Values to base class using derived class obj

#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    A()
    {
      a = 0;  
    }
    A(int val)
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
    B(int val1, int val2): A(val1)
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
    B objB(10,5);
    objB.disp();
    return 0;
}