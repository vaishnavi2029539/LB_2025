/*Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=5
Output :
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=irow;i>=1;i--)
    {
        for(int j=1;j<=jcol;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
int main()
{
    int irow, jcol;
    printf("Enter row and column:");
    scanf("%d %d",&irow,&jcol);
    display(irow,jcol);
    return 0;
}