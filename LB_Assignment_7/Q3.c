//write program to find the factorial of given number
//input : 5
//output : 120

#include<stdio.h>
int Factorial(int iNo)
{
    int fact = 1;
    for(int i = 1; i<=iNo; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);
    return 0;
}