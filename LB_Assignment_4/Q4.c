//write a program which accept one number from user and return addition of all it non factor
#include<stdio.h>
int SumNonFact(int iNo)
{
    int i = 0,sum=0;
    for(i=1;i<iNo;i++)
    {
        if(iNo%i != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    int iRet = 0;
    iRet = SumNonFact(iValue);
    printf("%d\t",iRet);
    return 0;

}