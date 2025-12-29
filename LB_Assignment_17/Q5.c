//Write a program which accept a number from user display below pattern
//Input: N ;5
//Output : 2 4 6 8 10

#include<stdio.h>
void display(int iNo)
{
    for(int i=1; i<=iNo; i++)
    {
        printf("%d\t",i*2);
    }
}
int main()
{
    int ival = 0;
    printf("Enter number :");
    scanf("%d",&ival);
    display(ival);
    return 0;
}