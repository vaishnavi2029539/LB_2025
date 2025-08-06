#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE , *PNODE, **PPNODE;

void InsertFIrst(PPNODE Head,PPNODE Tail,int iNo)//call by address
{
    PNODE newn = NULL;
    newn=malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;
    if((*Head==NULL)&& (*Tail==NULL))//LL is empty
    {
        *Head=newn;
        *Tail=newn;
    } else {//LL is not empty
        newn->next=*Head;
        (*Head)->prev=newn;
        *Head=newn;
    }
    (*Tail)->next=*Head;
    (*Head)->prev=*Tail;
}
void InsertLast(PPNODE Head,PPNODE Tail,int iNo)
{
    
    PNODE newn = NULL;
    newn=malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if((*Head==NULL)&& (*Tail==NULL))//LL is empty
    {
        *Head=newn;
        *Tail=newn;
    } else {//LL is not empty
        newn->prev=*Tail;
        (*Tail)->next=newn;
        *Tail=newn;
    }
    (*Tail)->next=*Head;
    (*Head)->prev=*Tail;
}
void InsertAtLoc(PPNODE Head,PPNODE Tail,int iNo,int iLoc)
{}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{}
void DeleteLast(PPNODE Head,PPNODE Tail)
{}
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc)
{}
void display(PNODE Head,PNODE Tail)//call by value
{
    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("| %d | <=>",Head->data);
            Head=Head->next;
        } while (Head!=Tail->next);
        printf("First node address");
    }
}
void count(PNODE Head,PNODE Tail)//call by value
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    InsertFIrst(&First,&Last,30);
    InsertFIrst(&First,&Last,20);
    InsertFIrst(&First,&Last,10);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    InsertLast(&First,&Last,60);
    display(First,Last);
    return 0;
}