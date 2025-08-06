//display addition of all even number from singly linked list
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE ,*PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void display();

        int getCount();
        void DeleteFirst();
        void DeleteLast();
        void InsertatLoc(int iNo,int iLoc);
        void DeleteatLoc(int iLoc);

        int AddEven();
        void displayEven();

};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor"<<endl;
    first = NULL;
    Count = 0;
}
        void SinglyLL :: InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;
            
            if(first == NULL)
            {
                first = newn;
            } else 
            {
                newn->next=first;
                first=newn;
            }
            Count++;
        }
void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = first;

    newn= new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(first == NULL)
    {
        first = newn;
    } else 
    {
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        }
        Count++;

}
void SinglyLL :: display()
{
    PNODE temp=first;
    cout<<"Elements in the linked list are:"<<endl;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"| ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int SinglyLL :: getCount()
    {
        return Count;
    }



void SinglyLL :: InsertatLoc(int iNo,int iLoc)
{
    if((iLoc<1) || (iLoc>Count+1))
    {
        return;
    }else 
    
    if (iLoc==1)
    {
        InsertFirst(iNo);
    } else if (iLoc==Count+1)
    {
        InsertLast(iNo);
    } else 
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data=iNo;
        newn->next=NULL;

        PNODE temp = first;
        int i=0;

        for(i=1;i<iLoc-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        Count++;
    }
    
}


void SinglyLL::displayEven()
{
    PNODE temp = first;
    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            cout << "|" << temp->data << "| -> ";
        }
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int SinglyLL::AddEven()
{
    int Add = 0;
    PNODE temp = first;

    while(temp!=NULL)
    {
        if(temp->data % 2 == 0)
        {
            Add = Add+temp->data;
        }
        temp = temp->next;
    }
    return Add;
     
}

int main()
{
    SinglyLL obj;
    obj.InsertFirst(11);
    obj.InsertFirst(15);
    obj.InsertFirst(20);
    obj.InsertFirst(22);
    obj.InsertFirst(35);
    obj.InsertatLoc(17,3);
    obj.InsertatLoc(28,2);
    obj.display();
    cout<<"Number of nodes in the linked list are:"<<obj.getCount()<<endl;

    obj.displayEven();
    cout<<"addition of all even numbers are:"<<obj.AddEven()<<endl;
    obj.AddEven();
    
    return 0;
}