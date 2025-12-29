/* Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =3 iCol=4
Output :

1 2 3 4
5 5 7 8
9 10 11 12
*/
#include<stdio.h>
void printPattern(int irow, int jcol)
{
    int iNo=1;
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=jcol;j++)
        {
            printf("%d ",iNo);
            iNo++;
        }
        printf("\n");
    }
}
int main()
{
    int irow, jcol;
    printf("Enter row and column:");
    scanf("%d %d",&irow,&jcol);
    printPattern(irow,jcol);
    return 0;
}