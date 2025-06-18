#include<stdio.h>
void displayFactor(int iNo)
{
    
    for(int iCnt=1; iCnt<=iNo; iCnt++)
    {    
        if(iNo%iCnt==0){
            printf("%d\n",iCnt);
        }
    }
   
}

int main()
{
    int iNo=0;
    printf("enter  number:\n");
    scanf("%d",&iNo);
    printf("factors of %d are:",iNo);
   displayFactor(iNo);
   return 0;
}