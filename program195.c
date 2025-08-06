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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if((*Head==NULL) && (Tail==NULL))//LL is empty
    {
        *Head=newn;
        Tail=newn;
        (*Tail)->next=*Head;
    }else {
        //ll contains one node in it
        newn->next=*Head;
        *Head=newn;
        (*Tail)->next=*Head;
    }
}
void InsertLast(PPNODE Head,PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if((*Head==NULL) && (Tail==NULL))//LL is empty
    {
        *Head=newn;
        Tail=newn;
        (*Tail)->next=*Head;
    }else {
        //LL contains single node in it
        Tail=newn;
        (*Tail)->next=newn;
        (*Tail)->next=*Head;//compulsory add this statement
    }
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
void display(PNODE Head,PNODE Tail)
{
    printf("Elements in the linked list are:\n");
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            printf("| %d | ->",Head->data);
            Head = Head->next;
        } while (Head!=Tail->next);
        printf("First node address\n");
        
    }
    return 0;
}
int count(PNODE Head,PNODE Tail)
{
    
    printf("Elements in the linked list are:\n");
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            printf("| %d | ->",Head->data);
            Head = Head->next;
        } while (Head!=Tail->next);
        printf("First node address\n");
        
    }
    return count;
}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;//#
    InsertFirst(&First,&Last,30);
    InsertFirst(&First,&Last,20);
    InsertFirst(&First,&Last,10);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    display(First,Last);
    printf("Total nodes in LL afe :%d\n",count(First,Last));
    return 0;
}