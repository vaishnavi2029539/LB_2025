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
            cout<<"Tnside constructor"<<endl;
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
        void InsertLast(int iNo){}
        void display(){}
};

int main()
{
    SinglyLL obj1;
    obj1.InsertFirst(10);
    obj1.InsertFirst(10);
    obj1.InsertFirst(10);
    obj1.display();
    cout<<"Number of nodes int the linked list are:"<<obj1.Count<<endl;
    return 0;
}