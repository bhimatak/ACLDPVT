#include <iostream>
#include <string>
using namespace std;

//Abstract Base class
class Person
{
    protected:
        string name;
    public:
        string getName() { return this->name; }
        void setName()
        {
            cout<<"\nName: ";
            cin>>this->name;
        }
        void setName(Person &p)
        {
            this->name = p.getName();
        }
        virtual void setDetails() = 0;
    
        virtual void printDetails() = 0;
};

class Employee: public Person {
    protected:
        int id;
        string name;
public:

    
    int getId() {return this->id; }

    

    void setId()
    {
        cout<<"ID: ";
        cin>>this->id;
        
    }

    void setId(Employee &e) { this->id = e.getId(); }

    

    /*void printDetails(){
        std::cout << "Employee details" << std::endl;
        cout<<"ID: "<<this->id<<endl;
        cout<<"Name: "<<this->getName()<<endl;
    }*/

    void setDetails()
    {
        cout<<"Enter Employee Details"<<endl;
        this->setId();
        this->setName();
        cout<<endl;
    }
    
};

class Manager : public Employee {
protected:
    string dept;
public:
    

    string getDept()
    {
        return this->dept;
    }

    void setDept(Manager &m)
    {
        this->dept = m.getDept();
    }
    

    void setDept(string dept)
    {
        this->dept = dept;
    }

    void setDept()
    {
        cout<<"\nDeptName: ";
        cin>>this->dept;
    }

    void setDetails()
    {
        Employee::setDetails();
        this->setDept();
    }

    void printDetails(){
        
        std::cout << "Manager details" << std::endl;
        Employee::printDetails();
        cout<<"DeptName: "<<this->getDept()<<endl;;
    }

    /*
    void printDetails() override{
        
        std::cout << "Manager details" << std::endl;
        Employee::printDetails();
        cout<<"DeptName: "<<this->getDept()<<endl;;
    }
    */
};

class Developer : public Employee {
private:
    string skills;
public:
    void printDetails() {
        std::cout << "Developer details" << std::endl;
        Employee::printDetails();
        cout<<"Skills: "<<this->skills<<endl;
    }

    string getSkills()
    {
        return this->skills;
    }

    void setSkills(Developer &d)
    {
        this->skills = d.getSkills();
    }

    void setSkills(string skills)
    {
        this->skills = skills;
    }

    void setSkills()
    {
        
        cout<<"\nSkills: ";
        cin>>this->skills;
    }

    void setDetails()
    {
        Employee::setDetails();
        this->setSkills();
    }

};

int main() {
    
    /* this is for to use polymorphism */
    /*
    Employee* employees[2];

    employees[0] = new Manager();
    employees[1] = new Developer();
    */
    /*
    for (int i = 0; i < 2; ++i) {
        employees[i]->getDetails(); // Polymorphic call
    }

    for (int i = 0; i < 2; ++i) {
        employees[i]->provideDetails(); // Polymorphic call
    }
    */

   /*
    
    employees[0]->setDetails();
    // employees[1]->setDetails();
    employees[0]->printDetails();
    // employees[1]->printDetails();
    
    // Cleanup
    for (int i = 0; i < 2; ++i) {
        delete employees[i];
    }
    */

   /* this is individual geting values to entity*/


   Manager m;
   m.setDetails();
   cout<<"\n=========================================\n"<<endl;
   m.printDetails();
   cout<<"\n=========================================\n"<<endl;
   Developer d;
   d.setDetails();
   cout<<"\n=========================================\n"<<endl;
   d.printDetails();
   cout<<"\n=========================================\n"<<endl;

    return 0;
}
