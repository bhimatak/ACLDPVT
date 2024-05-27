// C++ program to show the working of vtable and vptr 
#include <iostream> 
using namespace std; 

// base class 
class Base { 
public: 
	virtual void function1() 
	{ 
		cout << "Base function1()" << endl; 
	} 
	virtual void function2() 
	{ 
		cout << "Base function2()" << endl; 
	} 
	virtual void function3() 
	{ 
		cout << "Base function3()" << endl; 
	} 
}; 

// class derived from Base 
class Derived1 : public Base { 
public: 
	// overriding function1() 
	void function1() 
	{ 
		cout << "Derived1 function1()" << endl; 
	} 
	// not overriding function2() and function3() 
}; 

// class derived from Derived1 
class Derived2 : public Derived1 { 
public: 
	// again overriding function2() 
	void function2() 
	{ 
		cout << "Derived2 function2()" << endl; 
	} 
	// not overriding function1() and function3() 
}; 

// driver code 
int main() 
{ 
	// defining base class pointers 
	Base* ptr1 = new Base(); 
	Base* ptr2 = new Derived1(); 
	Base* ptr3 = new Derived2(); 

	// calling all functions 
	ptr1->function1(); 
	ptr1->function2(); 
	ptr1->function3(); 
	ptr2->function1(); 
	ptr2->function2(); 
	ptr2->function3(); 
	ptr3->function1(); 
	ptr3->function2(); 
	ptr3->function3(); 

	// deleting objects 
	delete ptr1; 
	delete ptr2; 
	delete ptr3; 

	return 0; 
}
