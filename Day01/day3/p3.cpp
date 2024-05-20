#include <iostream>

using namespace std;

class arrFuncs
{
	private:
		int a[5];

		int Big()
		{
			int big  = 0;
			for(register int i=0;i<5;i++)
			{
				if(big < a[i])
					big = a[i];
			}
			
			return big;
		}

		void SortAsc()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(a[i]<a[j])
					{
						int t = a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}

		}

		void SortDesc()
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(a[i]>a[j])
					{
						int t = a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}

		}
		
		void printArr()
		{
			for(int i=0;i<5;i++)
				cout<<" "<<a[i];
			cout<<endl;
		}
			
			


	public:
		void input()
		{
			cout<<"\nEnter the array elements: ";
			for(int i=0;i<5;i++)
				cin>>a[i];
		}

		void Display()
		{	
			int ch;
			do{
			cout<<"\n1. get Biggest of array elements";
			cout<<"\n2. get Array sorted in Asscending order";
			cout<<"\n3. get Array sorted in Descending order";
			cout<<"\n4. exit";
			cout<<"\nEnter your choice: ";
			cin>>ch;
		
			switch(ch)
			{
				case 1:
						cout<<Big();
						break;
				case 2:
						SortAsc();
						printArr();
						break;
				case 3:
						SortDesc();
						printArr();
						break;
				case 4:
						exit(0);
						break;
				default:
						cout<<"\nEnter correct choice"<<endl;
			}

			}while(ch);

		}

};

int main()
{
	arrFuncs a;
	a.input();	
	a.Display();

	return 0;

}
