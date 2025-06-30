//accept three numbers and print multiplication
#include<stdio.h>
int Multiply(int no1, int no2, int no3)
{
    return no1*no2*no3;
}
int main()
{
    int iValue1, iValue2, iValu3, iRet = 0;
    printf("please enter three number:\n");
    scanf("%d %d %d",&iValue1, &iValue2 ,&iValu3);
    iRet = Multiply(iValue1,iValue2,iValu3);
    printf("%d",iRet);
    return 0;
}