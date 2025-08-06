//doubly circular Linked List
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE ,*PNODE ;

class DoublyCL
{
    private:
        PNODE first;
        int Count=0;

    public:
        DoublyCL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        int getCount(); 
        
        void InsertatLoc(int iNo,int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteatLoc(int iLoc);
        void display();
        
};
DoublyCL:: DoublyCL()
{
    first = NULL;
    Count = 0;
}
void DoublyCL :: InsertFirst(int iNo){}
void DoublyCL::InsertLast(int iNo){}
void DoublyCL::InsertatLoc(int iNo,int iLoc){}
void DoublyCL::DeleteFirst(){}
void DoublyCL::DeleteLast(){}
void DoublyCL::DeleteatLoc(int iLoc){}
void DoublyCL::display(){}
int DoublyCL::getCount()
{
    return Count;
}


int main()
{
    DoublyCL obj1;
    
    return 0;
}