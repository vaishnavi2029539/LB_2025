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
            first = NULL;
            Count = 0;
        }
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertatLoc(int iNo,int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteatLoc(int iLoc);
        void display();
};

int main()
{
    SinglyLL obj1;
    obj1.InsertFirst(10);
    obj1.InsertFirst(10);
    obj1.InsertFirst(10);
    obj1.display();
    return 0;
}