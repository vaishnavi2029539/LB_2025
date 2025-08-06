#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

//void InsertFirst(PPNODE Head,int iNo)
void Push(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)//LL is empty
    {
        *Head = newn;
    }else {
        newn->next=*Head;
        *Head=newn;
    }
}

//DeleteFirst(PPNODE Head)
int POP(PPNODE Head)
{

}

void display(PNODE Head)
{
    printf("Elements in stack are:\n");

    while (Head!=NULL)
    {
        printf("|%d|\n",Head->data);
        Head=Head->next;
    }
    
}

int main()
{
    PNODE First=NULL;
    Push(First,10);
    Push(First,20);
    Push(First,30);
    Push(First,40);
    return 0;
}