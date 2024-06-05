#include <iostream>

class A {
    static A* instance;
    A() { std::cout << "private ctor\n"; }
public:
    static A* getInstance() {
        std::cout << "in func " << __func__ << std::endl;
        if (instance == nullptr) {
            instance = new A();
        }
        return instance;
    }
    void display() {
        std::cout << "in func " << __func__ << std::endl;
    }
};

A* A::instance;

int main(){
    A *ptr = A::getInstance();
    ptr->display();
    A *ptr2 = A::getInstance();
    ptr->display();
    std::cout << "Address of ptr = " << ptr << "; Address of ptr2: " << ptr2 << std::endl;
    return 0;
}