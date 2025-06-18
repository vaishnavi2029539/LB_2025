#include<stdio.h>
int sumFactor(int iNo)
{
    int iSum = 0;
    for(int iCnt=1; iCnt<=iNo/2; iCnt++)
    {    
        if(iNo%iCnt==0){
            iSum = iSum+iCnt;           
        }
    }
   return iSum;
}

int main()
{
    int iNo=0;
    printf("enter  number:\n");
    scanf("%d",&iNo);
    int iSum = sumFactor(iNo);
   printf("sum of factors of %d is %d:",iNo,iSum);
   return 0;
}