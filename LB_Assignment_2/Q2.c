//Accept one number from user and print that number of * on screen
#include<stdio.h>
void dispaly(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt) 
    {
        printf("*\t");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    dispaly(iValue);
    return 0;

}