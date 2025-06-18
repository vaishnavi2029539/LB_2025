#include<stdio.h>
int countDigits(int iNo)

{
    int iDigit= 0;
    int iSum = 0;
    while(iNo > 0)
    {
       
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10; 
       
        
    }
    return iSum;
}    

int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    int iSum = countDigits(iValue);
    printf("sum of digits %d is %d ",iValue,iSum);
    return 0;
}