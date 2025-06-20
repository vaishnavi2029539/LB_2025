//Accept one number from user and print that number of * on sceen
#include<stdio.h>
void display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;
    iValue=5;
    display(iValue);
    return 0;

}