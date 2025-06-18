#include<stdio.h>
#include<stdbool.h>
bool checkPerfect(int iNo)
{
    int iSum = 0;

    if(iNo<0){
        iNo=-iNo;
    }
    for(int iCnt=1; iCnt<=iNo/2; iCnt++)
    {    
        if(iNo%iCnt==0){
            iSum = iSum+iCnt;           
        }
    }
   if(iSum==iNo)
   {
    return true;
   } else {
    return false;
   }
}

int main()
{
    int iNo=0;
    printf("enter  number:\n");
    scanf("%d",&iNo);
    
   bool isPerfect = checkPerfect(iNo);
   if(isPerfect){
    printf("%d is perfect number",iNo);
   }else {
    printf("%d is not perfect number",iNo);
   }
    return 0;
}