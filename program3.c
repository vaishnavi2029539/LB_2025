//problem statement: accept two int and perform the addtion
#include<stdio.h>
int main()
{
    auto int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;
    printf("enter first number\n");
    scanf("%d",&iValue1);

    printf("enter second number\n");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;
    printf("Addition is : %d",iAns);

    return 0;
}