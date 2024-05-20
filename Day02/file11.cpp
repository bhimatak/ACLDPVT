#include <iostream>

using namespace std;


class A
{
    public:
    int x;
    private:
    int a;
    public:
        A(int val){ this->x = val; }
        void dispA()
        {
            cout<<"x: "<<x<<endl;
            cout<<"a: "<<a<<endl;
        }
        void setA(int val){ this->a = val; }

};

class B:public A
{
    private:
        int y;
    public:
        B(int val1, int val2):A(val1) { this->y = val2; }
        void dispB()
        {
            cout<<"y: "<<this->y<<endl;
            cout<<"x: "<<x<<endl;
        }
};



int main()
{
    // A a(10);
    // a.x;
    // a.dispA();

    B b(20,30);
    b.dispB();
    b.x = 20002;
    b.dispB();
    

    return 0;

}