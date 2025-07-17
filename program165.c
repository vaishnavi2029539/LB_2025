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
typedef struct node **PNODE;

int main()
{
    struct node *first = NULL;
    return 0;
}