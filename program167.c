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
    PNODE newn = NULL;
    newn = malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
}

int main()
{
    PNODE First = NULL;
    InserFirst(&First,10);
    return 0;
}