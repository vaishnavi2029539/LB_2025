/* Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =3 iCol=5
Output :
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
*/
#include<stdio.h>
void display(int irow, int icol)
{
    for(int i=1; i<=irow; i++)
    {
        for(int j=icol; j>=1; j--)
        {
            printf("%d ",j);
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