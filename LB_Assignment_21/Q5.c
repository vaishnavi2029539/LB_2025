/*
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/
#include<stdio.h>
void display(int irow, int jcol)
{
    for(int i=1; i<=irow; i++)
    {
        for(int j=1;j<=jcol;j++)
        {
            if(i==1 || i==irow || j==1 || j==jcol)
            {
                printf("%d ",j);
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int irow=0;
    int jcol=0;
    printf("Enter number of rows and columns \n");
    scanf("%d %d",&irow,&jcol);     
    display(irow, jcol);
    return 0;
}