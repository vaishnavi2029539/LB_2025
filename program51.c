//no is prime or not (no%no && no%1==0) //2 3 5 7 11 13 17 
#include<stdio.h>
#include<stdbool.h>
bool checkprime(int iNo)
{

    if(iNo<0){
        iNo=-iNo;
    }
    for(int iCnt=2; iCnt<=iNo/2; iCnt++)
    {    
        if(iNo%iCnt==0){
            return false;      
        }
    }
    return true;
}

int main()
{
    int iNo=0;
    printf("enter  number:\n");
    scanf("%d",&iNo);
    
   bool isPrime = checkPrime(iNo);
   if(isPrime){
    printf("%d is prime number",iNo);
   }else {
    printf("%d is not prime number",iNo);
   }
    return 0;
}