#include<iostream>

using namespace std;

class Test1
{
    protected:
        int x;
    public:
        Test1():x(201){}
        void setX(int val){ this->x = val; }
        int getX(){ return this->x; }
        void disp() { cout<<"\nTest1: x="<<x<<endl; }
};

class Test2: public Test1
{
    protected:
        int y;
    public:
        Test2():y(101){}
        void setY(int val){ this->y = val; }
        int getY(){ return this->y; }
        void disp() { cout<<"\nTest2: y="<<this->y<<endl; }
};



int main()
{
    Test1 *t1;
    Test2 t2;

    t1 = &t2;
    t1->disp();
    
    return 0;
}

