/* step1: obtained marks and store 




*/
#include<stdio.h>
float calculatePercentage(int iMarks, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iMarks/(float)iTotal)*100;
    return fPercentage;
}

int main()
{
    int iMarks = 0;
    int iTotal = 0;
    float fAns = 0.0f;
    printf("Enter the obtained marks\n");
    scanf("%d",&iMarks);
    printf("Enetr the out of marks \n");
    scanf("%d",&iTotal);

    fAns=calculatePercentage(iMarks,iTotal);
    printf("ypur percentage is : %f",fAns);

}
