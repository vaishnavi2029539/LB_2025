//write program which accept a number from user and display its factor in decreasing order
#include<stdio.h>
void FactRev(int iNo)
{
    int i = 0;
    for(i=iNo/2; i>=1; i--)
    {
        if(iNo%i==0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    FactRev(iValue);
    return 0;
}