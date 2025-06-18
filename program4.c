//problem statement: accept two int and perform the addtion
#include<stdio.h>
int iAddition(int iNo1,int iNo2)
{
    int iSum = 0; //variable to store sum of no's
    iSum = iNo1+iNo2;
    return iSum;
}
int main()
{
    auto int iValue1 = 0; //variable to store 1st no
    int iValue2 = 0;//variable to store 2nd no
    int iAns = 0;//variable to store addition
    printf("enter first number\n");
    scanf("%d",&iValue1);

    printf("enter second number\n");
    scanf("%d",&iValue2);

    iAns=iAddition(iValue1,iValue2);//call to iaddition function 
    printf("Addition is : %d",iAns);

    return 0;
}