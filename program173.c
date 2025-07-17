#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct node
{
    int data; //4byte
    struct node *next; //8byte
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    //step1:allocate memory dynamically for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(struct node));
    //step2:initialize the node 
    newn->data=iNo;
    newn->next=NULL;

    //step3: check wether linkedlit is empty or not
    if(*Head == NULL)
    {
    //LL is empty
    *Head=newn;
    }else{
    //LL is having atleast one node in it
    newn->next=*Head;
    *Head = newn; 

    }
}

void display(PNODE Head)
{
    printf("linkedlist data elements are:\n");
    while(Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL");
}
int count(PNODE Head)
{
    int iCnt = 0;
    while(Head!=NULL)
    {
        Head = Head->next;
    }printf("\n");
}
void InsertLast(PPNODE Head,int iNo)
{
    //temporary pointer for LL travelling
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));// memory allocation

    //node initialization
    newn->data=iNo;
    newn->next;NULL;
    if(*Head == NULL)
    {
    //LL is empty
    *Head=newn;
    }else{
        //if LL is  not empty
        while(Temp->next!=NULL)
        {
            Temp= Temp->next;
        }
        Temp->next = newn;
    }
}

int main()
{
    struct node * First = NULL;
    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertFLast(&First,60);
    display(First);
    int iRet = count(First);
    printf("Linkelist has %d nodes\n",iRet);
    return 0;
}