#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

//void InsertFirst(PPNODE Head,int iNo)
void Enqueue(PPNODE Head,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)//LL is empty
    {
        *Head = newn;
    }else{
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

//DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
    int value=0;
    PNODE temp = NULL;
    if(*Head ==NULL) // stack is empty
    {
        printf("Queue is empty:\n");
    } else // LL contains at least single node in it.
    {
        value =(*Head)->data;
        *Head=(*Head)->next;
        free(temp);
    } 
}

void display(PNODE Head)
{
    printf("Elements in Queue are:\n");

    while (Head!=NULL)
    {
        printf("|%d|\t",Head->data);
        Head=Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First=NULL;
    int deletedNo = 0;
    Enqueue(&First,10);
    Enqueue(&First,20);
    Enqueue(&First,30);
    Enqueue(&First,40);
    display(First);
    deletedNo=Dequeue(&First);
    printf("number deleted from queue: %d\n",deletedNo);
    display(First);
    deletedNo=Dequeue(&First);
    printf("number deleted from queue :%d\n",deletedNo);
    display(First);

    return 0;
}