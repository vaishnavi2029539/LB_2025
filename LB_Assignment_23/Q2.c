/*
Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=4
Output :
* * * #
* * # @
* # @ @
# @ @ @
*/
#include<stdio.h>
void display(int irow,int jcol)
{
    for(int i=1; i<=irow;i++)
    {
        for(int j=1; j<=jcol; j++)
        {
            if(i+j==irow+1)
            {
                printf("# ");
            }
            else if(i+j>irow+1)
            {
                printf("@ ");
            }
            else
            {
                printf("* ");
            }   
        }
        printf("\n");
    }
}
int main()
{
    int irow = 0, jcol =0 ;
    printf("Enter number of row and column \n");
    scanf("%d %d",&irow,&jcol); 
    display(irow,jcol); 
    return 0;   
}