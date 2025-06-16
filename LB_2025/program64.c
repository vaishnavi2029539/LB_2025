#include<stdio.h>
#include<stdbool.h>
int isPalindrome(int iNo)

{
    int iDigit = 0;
    int iSum = 0;
    int iRev = 0;
    int iCopyNo = iNo; //xerox of iNo
    while(iNo > 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;    
        iRev = (iRev*10) + iDigit;     //reverse no
    }
    if(iCopyNo == iRev)
    {
        return true;
    }else
    {
        return false;
    }
}    

int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bool isPalin = isPalindrome(iValue);
    if(isPalin==true)
    {
        printf("%d number is palindrome",iValue);
    }else{
        printf("%d number is not palindrome",iValue);
    }
}