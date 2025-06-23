//Accept one number from user and print that number of * on screen 
#include<stdio.h>
void display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}