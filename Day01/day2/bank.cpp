#include <iostream>

using namespace std;

class Bank
{
	private:
		int accno;
		int bal;
		char name[20];
	public:
		void CreateNewAcc(int ano)
		{
			cout<<"\nEnter the details of the customer\n";
			cout<<"\nName: ";
			cin>>name;
			cout<<"\nMin Deposit Amount (5000): ";
			cin>>bal;
			if(bal <5000){
				cout<<"\nMin Amount for acc opening is 5000";
				}
			accno = ano;
		}

		void dispDetails()
		{
			cout<<"\nName: "<<name;
			cout<<"\nAcc No: "<<accno;
			cout<<"\nBal: "<<bal;
		}

		void depoist();
};


void Bank::depoist()
{
	int amt;
	cout<<"\nEnter the amount to be deposited: ";
	cin>>amt;
	bal = bal + amt;
}
void NewAcc(Bank &,int [], int &);
void Disp(Bank);

int main()
{
	Bank C1,C2;
	int accNoList[10], noOfAccs=0;
	NewAcc(C1,accNoList, noOfAccs);
	NewAcc(C2,accNoList, noOfAccs);
	Disp(C1);
	Disp(C2);
	cout<<"\nNo of Accounts in the Bank="<<noOfAccs<<endl;
	cout<<"Account No are"<<endl;
	for(int i=0;i<noOfAccs;i++)
		cout<<"Acc No: "<<accNoList[i]<<endl;
	return 0;
}

void NewAcc(Bank &C, int accList[], int &NAccs)
{
	static int ano=1010;
	C.CreateNewAcc(ano);
	accList[NAccs]=ano;
	NAccs++;
	ano++;
}

void Disp(Bank C)
{
	C.dispDetails();
}


