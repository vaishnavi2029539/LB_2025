/* Write a program which accept a number of rows and columns from user and display below
pattern
Input: iRows =4 iCol=4
Output :
* # # #
* * # #
* * * #
* * * * 
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=jcol;j++)
        {
            if(j<=i)
            {
                printf("* ");
            }
            else{
                printf("# ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iRow =0, iCol=0;
    printf("Enter number of rows and columns \n");
    scanf("%d %d",&iRow,&iCol);
    display(iRow, iCol);
    return 0;
}