#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE , *PNODE, **PPNODE;

void InsertFIrst(PPNODE Head,PPNODE Tail,int iNo)
{}
void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{}
void InsertAtLoc(PPNODE Head,PPNODE Tail,int iNo,int iLoc)
{}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{}
void DeleteLast(PPNODE Head,PPNODE Tail)
{}
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc)
{}
void display(PNODE Head,PNODE Tail)//call by value
{}
void count(PNODE Head,PNODE Tail)//call by value
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}