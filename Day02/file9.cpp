#include <iostream>
#include <stdio.h>

using namespace std;

class Test
{
    public:
    int x;
    public:
        Test()
        {
            this->x = 10;

        }
        Test(int x)
        {
            this->x = x;
        }
        Test& setX(int x)
        {
            this->x = x;
            // this->disp();
            return *this;
        }
        int getx()
        {
            return this->x;
        }
        void disp()
        {
            cout<<"\nx="<<this->x<<endl;
            cout<<"Address: "<<this<<endl;
        }
};


int main()
{
    int *ptr;
    int a=10;
    ptr = &a;
    *ptr = 20;

    Test t1(101);
    t1.setX(2010);
    t1.disp();

    Test t2(202);
    t2.disp();
    int val = t1.getx();
    cout<<"val: "<<val<<endl;
    t2 = t1.setX(2024);

    t2.disp();

    printf("\nAddress of t1: %u",&t1);
    printf("\nAddress of t2: %u",&t2);

    cout<<(t2.setX(2345)).x;
    t2.disp();
    t1.disp();
    
    


    return 0;
}