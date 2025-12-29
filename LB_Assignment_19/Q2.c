/*Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=4
Output :
A B C D
a b c d
A B C D
a b c d
*/
#include<stdio.h>
void display(int irow, int jcol)    
{
    char ch = 'A';
    for(int i=1; i<=irow;i++,ch++)
    {
        if(i%2==0)
        {
            ch = 'a';
        }
        else
        {
            ch = 'A';
        }
        for(int j=1;j<=jcol;j++)
        {
            printf("%c ",ch);
            ch++;
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