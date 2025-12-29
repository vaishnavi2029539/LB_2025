/*
Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=4
Output :
    * * * *
    * * *
    * *
    *
*/
#include<stdio.h>
void display(int iRows, int iCols)
{
    for(int i = iRows; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i>=j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int irow=0;
    int jcol=0;
    printf("Enter number of rows:\n");
    scanf("%d",&irow);  
    printf("Enter number of columns:\n");
    scanf("%d",&jcol);
    display(irow,jcol);
    return 0;
}