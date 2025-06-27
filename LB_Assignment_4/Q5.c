//write a program which accept one number from user and return diffrerence between addition of all its factor and non factors
#include<stdio.h>
int FactDiff(int iNo)
{
    int i = 0,factSum = 0, nonFactSum = 0;
    for(i = 1; i<iNo; i++)
    {
        if(iNo%i == 0)
        {
            factSum += i;
        }else
        {
            nonFactSum += i;
        }
    }
    return factSum - nonFactSum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("enter number:\n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}

