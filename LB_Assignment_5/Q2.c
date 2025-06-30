//check if number is greater than 100
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChGreater(int iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }else{
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please enter number:\n");
    scanf("%d",&iValue);
    if(bRet == TRUE)
    {
        printf("GReater");
    }else{
        printf("Smaller");
    }
    return 0;
}
