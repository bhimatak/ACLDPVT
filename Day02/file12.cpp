#include <iostream>

using namespace std;

class Person{
    protected:
        string Name;
        int phno;
    private:
        string spouseName;
        void getSName()
        {
            spouseName = "XYZ";  
        }
    public:
        Person()
        {
            this->getSName();
        }
        void getPDetails()
        {
            cin>>Name>>phno;

        }

        void printPDetails()
        {
            
            cout<<Name<<"\t"<<phno<<spouseName<<endl;
        }
};

class Employee : private Person
{
    protected:
        int id;
        float salary;
        string dept;
    // protected:
    //     string Name;
    //     int phno;
    public:
        void getEDetails()
        {
            // getPDetails();
             cin>>Name>>phno;
            cin>>id>>salary>>dept;
        }
        void printEDetails()
        {
            // printPDetails();
            cout<<"\nEmployee Details are"<<endl;
            cout<<Name<<"\t"<<phno<<endl;
            cout<<id<<"\t"<<salary<<"\t"<<dept<<endl;
            printPDetails();
        }
};

class Manager: public Employee
{
    private:
        string desig;
    public:
        void getMDetails()
        {
            cin>>Name>>phno;
            cin>>id>>salary>>dept;
            cin>>desig;

        }
        void printMDetails()
        {
             cout<<"\nEmployee Details are"<<endl;
            cout<<Name<<"\t"<<phno<<endl;
            cout<<id<<"\t"<<salary<<"\t"<<dept<<endl;
            cout<<"\nDesign: "<<desig<<endl;
        }
};


class t: public Manager
{
    public:
    void 
    printTDetails()
        {
             cout<<"\nEmployee Details are"<<endl;
            cout<<Name<<"\t"<<phno<<endl;
            cout<<id<<"\t"<<salary<<"\t"<<dept<<endl;
            cout<<"\nDesign: "<<desig<<endl;
            printPDetails();

        }

};




int main()
{
    // Employee e1;
    // // e1.getPDetails();
    // e1.getEDetails();
    // // e1.printPDetails();
    // e1.printEDetails();

    Manager m1;
   
    // m1.getEDetails();
    m1.getMDetails();
    // m1.printEDetails();
    m1.printMDetails();

    return 0;
}