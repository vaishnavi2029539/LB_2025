/* Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=3
Output :1 2 3
        1 2 3
        1 2 3
        1 2 3
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    int i = 0;
    for(i=1; i<=irow; i++)
    {
        for(int j=1; j<=jcol;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{
    int row, col;
    printf("enter row and column:");
    scanf("%d %d",&row, &col);
    display(row,col);
    return 0;
    
}