#include <iostream>
using namespace std;

class test
{
	private:	
		int a;
	public:
		void func1()
		{
			cout<<a<<endl;
		}
		void func2(int x)
		{
			a = x;
		}
};

int main()
{
	test t1;

	t1.func2(30);	
	t1.func1();

	return 0;
}
