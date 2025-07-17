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

void InserFirst(PPNODE Head, int iNo)
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

int main()
{
    struct node * First = NULL;
    InserFirst(&First,10);
    InserFirst(&First,20);
    display(First);
    return 0;
}