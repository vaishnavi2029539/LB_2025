//write a program which accept range fron user and display all number in between that range
#include<stdio.h>
double displayRange(int start, int end)
{
    int i = 0;
    for(i = start; i<=end; i++)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int ival1 = 0;
    int ival2 = 0;
    printf("Enter starting point\n");
    scanf("%d",&ival1);
    printf("Enter ending point\n");
    scanf("%d",&ival2);
    displayRange(ival1,ival2);
    return 0;    
}