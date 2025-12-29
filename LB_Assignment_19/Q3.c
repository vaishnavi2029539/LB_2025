/*Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =3 iCol=5
Output :

A A A A A
B B B B B
C C C C C
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    char ch = 'A';
    for(int i=1; i<=irow;i++)
    {
        for(int j=1;j<=jcol;j++)
        {
            printf("%c ",ch); 
        }
        ch++;printf("\n");
    }
}
int main()
{
    int irow, jcol;
    printf("Enter row and column");
    scanf("%d %d",&irow,&jcol);
    display(irow,jcol);
    return 0;

}