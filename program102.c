//* * * *
//# # # #
//* * * *
//# # # #
#include<stdio.h>
void display(int iRow,int iCol)
{
    
    for(int i=1; i<=iRow; i++)//rows,outer
     {
        for(int j=1; j<=iCol; j++)//columns,inner
        {
            if(i%2==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
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