#include <iostream>

using namespace std;

class Test
{
    private:
        static int val;
        int z;
    public:
        static void disp()
        {
            cout<<"static member: "<<val<<endl;
            // cout<<"non static member: "<<z<<endl;
        }

        void disp1()
        {
            cout<<"static member: "<<val<<endl;
            cout<<"non static member: "<<z<<endl;
        }
};

int Test::val=101;

int main()
{
    Test t1;

    t1.disp();

    return 0;
}