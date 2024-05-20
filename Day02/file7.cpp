#include <iostream>

using namespace std;


class test
{
    public:
    static int count;
    public:
    
    test()
    {
        cout<<"def contr is called"<<endl;
        
    }
    
    void setCount()
    {
        count ++;
    }
    void display()
    {
        cout<<count<<"\t"<<endl;
    }

    ~test()
    {
        cout<<"\nDestr is called"<<endl;
    }
};

int test::count = 0;

main()
{
    test t1,t2,t3;
    t1.setCount();
    t1.display();
    t2.display();
    cout<<"count: "<<test::count<<endl;
    return 0;

}