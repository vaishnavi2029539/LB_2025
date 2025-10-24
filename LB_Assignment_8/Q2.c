//accept amount in US dollar and convert it in INR consider 1$ = 45 INR
//input : 10
//output : 450

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;
    iResult = iNo * 45;
    return iResult;
}


int main()
{
    int iVal = 0;
    printf("Enter number\n");
    scanf("%d",&iVal);
    int rupees = DollarToINR(iVal);
    printf("Value in Indian rupees is : %d",rupees);
    return 0;
}