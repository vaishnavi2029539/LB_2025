/*Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows = 5 iCol=5
Output :

A B C D E
1 2 3 4 5
A B C D E
1 2 3 4 5
A B C D E
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=1; i<=irow;i++)
    {
        char ch='A';
        for(int j=1;j<=jcol;j++)
        {
            if(i%2==0)
            {
                printf("%d ",j);
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
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