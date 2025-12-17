//write a program which accept number from user nand return the count of odd number

#include<stdio.h>
int countOdd(int ino)
{
    int iDigit = 0;
    int count = 0;
    
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit % 2 != 0)
        {
            count++;
        }
        ino = ino / 10;
    }
    return count;
}
int main()
{
    int ival1 = 0;
    int iRet = 0;
    printf("Enter number:\n");
    scanf("%d",&ival1);
    iRet = countOdd(ival1);
    printf("count of odd number is: %d",iRet);
    return 0;
}