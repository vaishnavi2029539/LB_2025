//write a program which accept number from user and check whether it contain 0 int it or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL isZero(int ino)
{
    int iDigit = 0;
    if(ino<0)
    {
        ino = -ino;
    }
    while(ino!=0)
    {
        iDigit = ino%10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        
        ino = ino / 10;
    }
    return FALSE;
}
int main()
{
    int ival = 0;
    BOOL bret = FALSE;
    printf("Enter number\n");
    scanf("%d",&ival);
    bret= isZero(ival);

    if(bret == TRUE)
    {
        printf("it contain zero\n");
    }
    else
    {
        printf("it does not contain zero\n");
    }

    return 0;
}