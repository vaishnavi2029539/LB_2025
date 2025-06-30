//Accept total marks and obtain marks ,calculate percentage
#include<stdio.h>
float Percentage(int total, int obtained)
{
    if(total == 0)
    {
        return 0.0;
    }
    return ((float)obtained/total)*100;
}
int main()
{
    int iValue1, iValue2 = 0;
    float fRet = 0.0;
    printf("Please enter total marks:\n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks:\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1, iValue2);
    printf("%.2f%%",fRet);
    return 0;
}