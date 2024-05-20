#include <iostream>
using namespace std;

class dist
{
	private:
		int ft;
		float inch;
	public:
		void setValues()
		{
			cout<<"\nEnter the values of distance in ft and inches: ";
			cin>>ft>>inch;
		}

		int getFeet()
		{
			return ft;
		}
		float getInch()
		{
			return inch;
		}
};

int main()
{
	dist d1,d2;
	int ft=0;
	float inch= 0.0;

	d1.setValues();
	d2.setValues();
	cout<<d1.getFeet()<<" "<<d1.getInch()<<endl;
	cout<<d2.getFeet()<<" "<<d2.getInch()<<endl;

	ft = d1.getFeet()+d2.getFeet();
	inch = d1.getInch()+d2.getInch();

	while(inch >= 12)
		{
			inch = inch - 12.0;
			ft++;
		}
	cout<<ft<<"\'-"<<inch<<"\""<<endl;


	
	return 0;
}



