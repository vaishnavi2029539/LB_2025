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
        void InsertFirst(int iNo){}
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