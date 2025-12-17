// write a program which accept number from user and return multiplication of it

#include<stdio.h>
int digitMultiply(int ino)
{
    int iDigit = 0;
    int temp = 1;

    while(ino != 0)
    {
        iDigit = ino % 10;
        temp = temp * iDigit;
        ino = ino /10;
    }
    return temp;
}

int main()
{
    int ival = 0;
    int iRet = 0;
    printf("Enter number:\n");
    scanf("%d",&ival);
    iRet = digitMultiply(ival);
    printf("Multiplication of digits is: %d",iRet);
    return 0;
}
