#include<iostream>

using namespace std;

class Test1
{
    protected:
        int x;
    public:
        Test1():x(201){
            cout<<"Contr Test1"<<endl;
        }

        virtual ~Test1(){ cout<<"Detor Test1"<<endl;}
        void setX(int val){ this->x = val; }
        int getX(){ return this->x; }
        virtual void disp() =0;//{ cout<<"\nTest1: x="<<x<<endl; }
};

class Test2: public Test1
{
    protected:
        int y;
    public:
        Test2():y(101){
            cout<<"Contr Test2"<<endl;
        }
        ~Test2(){ cout<<"Detor Test2"<<endl;}
        void setY(int val){ this->y = val; }
        int getY(){ return this->y; }
        void disp() { cout<<"\nTest2: y="<<this->y<<endl; }
};



int main()

{

    Test1 *t1 = new Test2();
    // Test2 t2;
    // t1 = &t2;

    delete t1;

    
    return 0;
}

