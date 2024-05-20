#include <iostream>
using namespace std;

class demoConst
{
	int a[5];

	public:
	/*
		demoConst(int x=10)
		{
			cout<<"para Constructor is called"<<endl;
			a=x;
		}
	*/	
		demoConst()
		{
			cout<<"default Constructor is called"<<endl;
			for(int i=0;i<5;i++)
				a[i]=1;
		}
		

		~demoConst()
		{
			cout<<"Destructor is called"<<endl;
		}
		
		void setA(int x)
		{
			for(int i=0;i<5;i++)
				a[i] = x;
		}

		void printA()
		{
			for(int i=0;i<5;i++)
				cout<<" "<<a[i];
			cout<<endl;
		}
};


int main()
{
	demoConst d1,d2;

	cout<<"Main FUnction called"<<endl;

	//d1.setA(1);
	//d2.setA(5);

	d1.printA();
	d2.printA();

	return 0;
}
