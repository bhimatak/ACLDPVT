#include <iostream>
using namespace std;

class greatest{

	private:
		int big;
		int x,y,z;
		
		int findBig()
		{
			return ((x>y)?((x>z)?x:z):((y>z)?y:z));
		}

	public:
		void input()
		{
			cout<<"\nEnter the 3 nos"<<endl;
			cin>>x>>y>>z;
			cout<<"Big ="<<findBig()<<endl;
		}


};


int main()
{
	greatest B;
	B.input();

	return 0;
}
