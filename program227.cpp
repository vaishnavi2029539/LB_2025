//doubly linear Linked Linst
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE ,*PNODE ;

class DoublyLL
{
    public:
        PNODE first;
        int Count;

        DoublyLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertatLoc(int iNo,int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteatLoc(int iLoc);
        void display();
        int getCount();
};
void DoublyLL :: InsertFirst(int iNo){}
void DoublyLL::InsertLast(int iNo){}
void DoublyLL::InsertatLoc(int iNo,int iLoc){}
void DoublyLL::DeleteFirst(){}
void DoublyLL::DeleteLast(){}
void DoublyLL::DeleteatLoc(int iLoc){}
void DoublyLL::display(){}
int DoublyLL::getCount()
{
    return Count;
}


int main()
{
    DoublyLL obj1;
    
    return 0;
}