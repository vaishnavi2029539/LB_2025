#include<stdio.h>
float average(int no1, int no2, int no3)
{
    float ans = (float)(no1+no2+no3)/3;
    return ans;
}

int main()
{
    int iNo1, iNo2 ,iNo3= 0;
    printf("enter first number \n");
    scanf("%d",&iNo1);
    printf("enter second number \n");
    scanf("%d",iNo2);
    printf("enter third number \n");
    scanf("%d",&iNo3);
    float avg = average(iNo1,iNo2,iNo3);
    printf("averge is = %f",avg);
}