// C++ program to demonstrate that data cannot be updated
// in a Constant member function

#include <iostream>
using namespace std;

class Demo {
	public:
	int x;

public:
	void set_data(int a) { x = a; }

	// constant member function
	int get_data() const
	{
		// Error while attempting to modify the data
		// member
		// int val=0;
		// val++;
		++x;
		return x;
	}
};

main()
{
	Demo d;
	d.set_data(10);
	cout << endl << d.get_data();

	return 0;
}
