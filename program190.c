#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE,*PNODE,**PPNODE;

//typedef struct node NODE;
//typedef struct node * PNODE;
//typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int iNo)
{

}
void InsertLast(PPNODE Head,PPNODE Tail, int iNo)
{

}
void InsertAtLoc(PPNODE Head,PPNODE Tail, int iNo, int iLoc)
{

}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{

}
void DeleteLast(PPNODE Head,PPNODE Tail)
{

}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc)
{

}
void display(PNODE Head,PPNODE Tail)
{

}
void count(PNODE Head,PPNODE Tail)
{
    return 0;
}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}