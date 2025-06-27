//write a program which accept one number from user and display its multiplication of factors
#include<stdio.h>
int multFact(int iNo)
{
    int i = 1, mult=1;
    for(i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            mult *= i;
        }
    }
    return mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet = multFact(iValue);
    printf("%d",iRet);
    return 0;
}