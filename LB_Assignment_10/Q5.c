//write a program to accept a range from user and display all numbers in between that range in reverse order
#include<stdio.h>
void ReveresRange(int start, int end)
{
    int i = 0;
    if(start>end)
    {
        printf("Invalid range");
    }
    for(i = end; i>=start; i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int ival1 = 0, ival2 = 0;
    printf("Enter start:");
    scanf("%d",&ival1);
    printf("Enter end:");
    scanf("%d",&ival2);
    ReveresRange(ival1,ival2);
}