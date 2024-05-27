#include <iostream>

using namespace std;

template <class T1, class T2>
class Test
{
    T1 l1;
    T2 l2;

    public:
        Test(T1 val1, T2 val2){
            this->l1 = val1;
            this->l2 = val2;
        }
        Test(T1 val1){
            this->l1 = val1;
            this->l2 = val1;

        }
        T1 calcArea()
        {
            return this->val1*this->val2;
        }
        
};

int main()
{
    Test <int, int>t1(11,12);
    Test <float>t2(10.5);
    cout<<t1.calcArea();
    cout<<t2.calcArea();

    return 0;
}