//Passing Values to base class using derived class obj

#include <iostream>
using namespace std;

class A
{
    protected:
    int a;
    int b;
    public:
    A():a(110),b(220)
    {
    //   a = 0;  
    //   b = 0;
    }
    A(int v1, int v2):b(v1),a(v2)
    {
        cout<<"const"<<endl;
        // this->a = v1;
        // this->b = v2;
    }
    void disp()
    {
        cout<<a<<"\t"<<b<<endl;
    }
};



int main()
{
    A objA(10,5);
    objA.disp();

    A obj1;
    obj1.disp();
    
    return 0;
}