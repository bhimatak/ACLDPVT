//Passing Values to base class using derived class obj
// Passing structure

#include <iostream>
using namespace std;

typedef struct Settings
{
    int x;
    int y;
}SETTINGS;


class A
{
    protected:
    int a;
    int b;
    public:
    A()
    {
      a = 0;
      b = 0;  
    }
    A(const SETTINGS& s)
    {
        this->a = s.x;
        this->b = s.y;
    }

};

class B: public A
{
    int c;
    public:
    B()
    {
      c = 0;  
    }
    B(const SETTINGS &s, int val2): A(s)
    {
        this->c = val2;
    }
    void disp()
    {
        cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<endl;

    }
};

int main()
{
    SETTINGS s;
    s.x = 12;
    s.y = 13;
    B objB(s,10);
    objB.disp();
    return 0;
}