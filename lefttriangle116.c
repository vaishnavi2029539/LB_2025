//* * * * 
//* * * 
//* *
//* 

#include<stdio.h>
void display(int iRow,int iCol)
{
    
    for(int i=1; i<=iRow; i++)//rows,outer
     {
        for(int j=i; j<=iCol; j++)//columns,inner
        {
           
            printf("*\t");
           
            
        }
        printf("\n");
     }
    
}

int main()
{   
    int iRow = 0;
    int iCol=0;
    printf("enter how many rows:\n");
    scanf("%d",&iRow);
    printf("enter how many rows:\n");
    scanf("%d",&iCol);

    display(iRow,iCol); 
    return 0;
}
