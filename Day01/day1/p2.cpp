#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;

	cout<<"After swap\n"<<x<<" "<<y<<endl;
}

int main()
{
	int a,b;
	cout<<"\nEnter the values of a and b: ";
	cin>>a>>b;

	cout<<"\nBefore Swap\n"<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After swap (in Main Func)\n"<<a<<" "<<b<<endl;

	return 0;
}
