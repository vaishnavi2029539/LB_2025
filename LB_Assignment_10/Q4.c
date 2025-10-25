//write a program to accept a range from user and return addition of all even numbers in between that range
#include<stdio.h>
int RangeSumEven(int start, int end)
{
    int i =0;
    int sum = 0;
    if(start>end)
        {
            return -1;
        }
        
    for(i = start; i<=end; i++)
    {
       if(i%2==0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int ival1 = 0, ival2 =0;
    printf("Enter start:");
    scanf("%d",&ival1);
    printf("Enter end:");
    scanf("%d",&ival2);
    int isum = RangeSumEven(ival1,ival2);
    if(isum == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("sum of even number is %d",isum);
    }
    return 0;
}
