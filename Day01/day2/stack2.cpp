#include <iostream>
#define MAX 5

using namespace std;

class Stack
{
	private:
		int top=-1;
		int a[MAX];
	public:
		void push();
		void pop();
		void display();
};

void Stack::push()
{
	int val;
	if(top == MAX-1)
    {
        cout<<"\n Stack is OverFlow or FULL\n";
    }
    else    
    {
        cout<<"\nEnter the value to be pushed to the stack: ";
        cin>>val;
        top++;
        a[top] = val;
    }
}


void Stack::pop()
{
    if(top == -1) 
    {
        cout<<"\n Stack is Empty or UnderFlow";
    }
    else    
    {
        cout<<"\nPoped out element is "<<a[top]; 
        top--;
    }

}


void Stack::display()
{
    int i;  
    if(top == -1) 
    {
        cout<<"\n Stack is Empty or underFlow";
    }
    else
    {
        for(i=top;i>=0;i--)
            cout<<a[i]<<endl;
    }

}



int main()
{
	Stack s;
   	int ch;
    do{
        //system("clear");
        cout<<"\nEnter your Choice: ";
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. exit";
        cout<<"\nChoice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\nEnter the correct Choice\n";
        }
    }while(ch != 4);
	
	return 0;
}
		

