/*
Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows = 5 iCol=5
Output :
$ * * * *
* $ * * *
# # $ * *
# # # $ *
# # # # $
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=1; i<=irow; i++)
    {
        for(int j=1; j<=jcol;j++)
        {
            if(i==j)
            {
                printf("$ ");
            }
            else if (i>j)
            {
                printf("# ");
            }
            else{
                printf("* ");
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