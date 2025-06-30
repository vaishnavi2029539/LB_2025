//check wether two number are equal
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int no1,int no2)
{
    if(no1 == no2)
    {
        return TRUE;
    }else {
        return FALSE;
    }
}
int main()
{
    int iValue1, iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Please enter two number:\n");
    scanf("%d %d",&iValue1, &iValue2);
    bRet = ChkEqual(iValue1,iValue2);
    if(bRet == TRUE)
    {
        printf("Equal");
    }else{
        printf("Not Equal");
    }
    return 0;
}