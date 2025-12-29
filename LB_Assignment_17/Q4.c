//Write a program which accept a number from user display below pattern
//Input: N ;5
//Output : # 1 * # 2 * # 3 * # 4 * # 5 *

#include<stdio.h>
void display(int iNo)
{
    for(int i=1; i<=iNo; i++)
    {
        printf("# %d * ",i);
    }
}
int main()
{
    int iVal = 0;
    printf("Enter number:");
    scanf("%d",&iVal);
    display(iVal);
    return 0;
}