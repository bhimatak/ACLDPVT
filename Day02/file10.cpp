#include <iostream>

using namespace std;

class Test2;

class Test1
{
    int i;
    public:
        Test1():i(10)
        {
        }

        void setVal(int val)
        {
            this->i = val;
        }

        int getVal()
        {
            return this->i;
        }
        void display()
        {
            cout<<"i: "<<i<<endl;
        }
        friend int func1(Test1 &, Test2 &);
};


class Test2
{
    int j;
    public:
        Test2():j(10)
        {
        }
        void setVal(int val)
        {
            this->j = val;
        }
        void display()
        {
            cout<<"j: "<<j<<endl;
        }
        int getVal()
        {
            return this->j;
        }
        friend int func1(Test1 &, Test2 &);
};

int func1(Test1& s1, Test2& s2)
{
    s1.i = 1000;
    s2.j = 2000;
    
    return (s1.getVal()+s2.getVal());
}

int main()
{
    Test1 t1;
    Test2 t2;
    t1.setVal(101);
    t2.setVal(201);


    int val = func1(t1,t2);
    cout<<"Val : "<<val<<endl;

    t1.display();
    t2.display();

    return 0;
}