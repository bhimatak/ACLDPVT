#include <iostream>

using namespace std;

class LList;

class Node
{
    protected:
        int data;
        Node *next;

    public:
        Node() { this->data = 0; this->next = nullptr; }
        friend class LList;
};

class LList
{
    Node *head = nullptr, *temp = nullptr, *nn = nullptr;
    public:
        LList(){ head = nullptr; temp = nullptr; }

        void end(int val)
        {
            nn = new Node();
            nn->data = val;

            if(head == nullptr)
            {
                //list is empty
                head = nn;
                temp = nn;
            }
            else
            {
                temp->next = nn;
                temp = temp->next;      
            }

        }

        void disp()
        {
            Node *t = head;
            while(t != nullptr)
            {
                cout<<t->data<<"->";
                t = t->next;
            }
            cout<<"NULL"<<endl;
        }
    
};

int main()
{
    LList l1;

    l1.end(10);
    l1.end(20);
    l1.end(30);
    l1.disp();

    return 0;
}