//singly circular linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE ,*PNODE, **PPNODE;

class SinglyCL
{
    public:
        PNODE first;
        PNODE Last;
        int Count;

        SinglyCL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertatLoc(int iNo,int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteatLoc(int iLoc);
        void display();
        int getCount();
};
SinglyCL ::SinglyCL()
        {
            first = NULL;
            Last=NULL;
            Count = 0;
        }
void SinglyCL :: InsertFirst(int iNo){}
void SinglyCL::InsertLast(int iNo){}
void SinglyCL::InsertatLoc(int iNo,int iLoc){}
void SinglyCL::DeleteFirst(){}
void SinglyCL::DeleteLast(){}
void SinglyCL::DeleteatLoc(int iLoc){}
void SinglyCL::display(){}
int SinglyCL::getCount()
{
    return Count;
}


int main()
{
    SinglyCL obj1;
    
    return 0;
}