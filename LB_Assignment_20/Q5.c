/*Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=4
Output :
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=1; i<=irow;i++)
    {
        for(int j=1; j<=jcol; j++)
        {
            printf("%d ",i+j-1);
        }
        printf("\n");
    }
}
int main()
{
    int iRow=0, iCol=0;
    printf("Enter number of rows and columns \n");
    scanf("%d %d",&iRow,&iCol);
    display(iRow,iCol);
    return 0;
}