//problem statement: accept two int and perform the addtion
#include<stdio.h>
/////////////////////////////////////////////
//function name:iAddition
//Description:used to perform addition of two no
//Input arguments:Integer,Integer
//Output:integer
//Author:vaishnavi jadhav
//Date:13/4/25
////////////////////////////////////////////

int iAddition(int iNo1,int iNo2)
{
    int iSum = 0; //variable to store sum of no's
    iSum = iNo1+iNo2;
    return iSum;
}
/// @brief Entry point function application which perform addition//
/// @return  integer //
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