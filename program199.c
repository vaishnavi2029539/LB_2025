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
    int size ,i=0;
    size=count(*Head,*Tail);
    PNODE newn = NULL;
    PNODE TEMP =*Head;

    if((iLoc<1) && (iLoc>(size+1)))//-1,8,11,0
    {
        printf("invalid location \n");
        return;
    }
    if(iLoc==1)
    {
        InsertFirst(Head,Tail,iNo);
    }else if(iLoc == (size+1))//7
    {
        InsertLast(Head,Tail,iNo);
    }else //2,3,4
    {
        newn =(PNODE)malloc(sizeof(NODE));
        newn->data=iNo;
        newn=NULL;

        for(i=1;i<iLoc-1;i++)
        {
            TEMP=TEMP->next;
        }
        newn->next=TEMP->next;
        TEMP->next=newn;
    }

}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL && *Tail==NULL ))//LL empty
    {
        return;
    }else if(*Head==*Tail) //LL with single node
    {
        free(*Head);
        *Head==NULL;
        *Tail=NULL;
    } else
    {
        *Head=(*Head)->next;
        free ((*Tail)->next);
        (*Tail)->next=*Head;
    }
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL && *Tail==NULL ))//LL empty
    {
        return;
    }else if(*Head==*Tail)
    {
        free(*Head);
        *Head==NULL;
        *Tail=NULL;
    } 
}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc)
{

}
int display(PNODE Head,PNODE Tail)
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
    DeleteFirst(&First,&Last);
    InsertAtLoc(&First,&Last,100,3);
    display(First,Last);
    printf("Total nodes in LL afe :%d\n",count(First,Last));
    return 0;
}