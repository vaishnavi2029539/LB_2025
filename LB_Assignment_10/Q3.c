//write a program to accept a range from user and retrun addition of all numbers in between that range
#include<stdio.h>
double RangeSum(int start, int end)
{
    int i = 0;
    int sum = 0;
    if(start > end)
        {
            return -1;
        }
        
    for(i = start; i<=end; i++)
    {
        sum = sum + i;
        
    }return sum;
}
int main()
{
    int ival1 =0, ival2 =0;
    printf("Enter start:");
    scanf("%d",&ival1);
    printf("Enter end:");
    scanf("%d",&ival2);
    int isum = RangeSum(ival1,ival2);
    if(isum == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("addition is %d",isum);
    }
    
    return 0 ;
}