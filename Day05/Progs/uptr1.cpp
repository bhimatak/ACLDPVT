#include <iostream>
#include <memory>

using namespace std;

class rect
{
    private:
        int l;
        int w;
    public:
        rect() { l= 0; w =0;}
        rect(int l,int w) { this->l = l; this->w = w;}
        int area() {return this->l*this->w; }
};

int main()
{
    /*
    unique_ptr<rect> p1(new rect(10,5));
    cout<<p1->area()<<endl;
    unique_ptr<rect> p2;

    p2 = move(p1);
    cout<<p2->area()<<endl;
    // cout<<p1->area()<<endl;
    */
     shared_ptr<rect> p1(new rect(10,5));
    cout<<p1->area()<<endl;
    shared_ptr<rect> p2(p1);

    // p2 = move(p1);
    cout<<p2->area()<<endl;
    cout<<p1->area()<<endl;
    cout<<p1.use_count()<<endl;
    
    return 0;

}