// + operator overload 
#include<iostream>
using namespace std;


class rectAngle
{
    private:
        int len;
        int width;
    public:
        rectAngle();
        rectAngle(int,int) ;
        int calculateArea()
        {
            return this->len * this->width;
        }

        rectAngle operator+(const rectAngle&obj) const{
            rectAngle r;
            r.len = this->len+obj.len;
            r.width = this->width+obj.width;

            return r;
        }

        void display()
        {
            cout<<"\nLen: "<<this->len<<"\t"<<"Width: "<<this->width<<endl;
            
        }
        
        friend ostream& operator<<(ostream &os, const rectAngle & obj){
            // os<<"Len: "<<obj.len<<"\t"<<"Width: "<<obj.width<<endl;
            os <<"Hello World!"<<endl;
            return os;
        }
        
};

rectAngle::rectAngle(){this->len = 0; this->width = 0; }

rectAngle::rectAngle(int len, int width){ this->len = len; this->width = width;}

int main()
{
    rectAngle r1(10,12),r2(20,22),r3;
    cout<<r1<<endl;
    r3 = r1+r2;
    r3.display();
    return 0;
}