#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE ,*PNODE, **PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int Count;

        SinglyLL()
        {
            cout<<"Inside constructor"<<endl;
            first = NULL;
            Count = 0;
        }
        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;
            
            if(first == NULL)//LL is empty
            {
                first = newn;
            } else 
            {
                newn->next=first;
                first=newn;
            }
            Count++;
        }
        void InsertLast(int iNo)
        {
            PNODE newn = NULL;
            PNODE temp = first;

            newn= new NODE;
            newn->data=iNo;
            newn->next=NULL;

            if(first == NULL)//LL is empty
            {
                first = newn;
            } else 
            {
                while (temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newn;
            }
            Count++;

        }
        void display()
        {
            PNODE temp=first;
            cout<<"Elements in the linked list are:"<<endl;
            while(temp!=NULL)
            {
                cout<<"|"<<temp->data<<"| ->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};

int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.display();
    cout<<"Number of nodes in the linked list are:"<<obj.Count<<endl;
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.display();
    cout<<"Number of nodes in the linked list are:"<<obj.Count<<endl;
    return 0;
}