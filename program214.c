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
    int value=0;
    PNODE temp = NULL;
    if(*Head ==NULL) // stack is empty
    {
        printf("Stack is empty:\n");
    } else // LL contains at least single node in it.
    {
        value =(*Head)->data;
        *Head=(*Head)->next;
        free(temp);
    } 
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
    display(First);
    int deletedNo=POP(&First);
    printf("Number POPed from stack is %d",deletedNo);
    deletedNo=POP(&First);
    printf("Number POPed from stack is %d",deletedNo);
    display(First);
    return 0;
}