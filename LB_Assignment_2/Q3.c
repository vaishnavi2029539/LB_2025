//Accept one number from user and if number is less than 10 then print "Fabulous" otherwise print "HEllo"
#include<stdio.h>
void display(int iNo)
{
    int iCnt=0;
    if(iNo<=10)
    {
        printf("Fabulous \n");
    }else
    {
        printf("Hello \n");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}