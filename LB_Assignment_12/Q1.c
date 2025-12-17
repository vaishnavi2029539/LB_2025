//Write a program which accept number from user and return the count of even digits

#include<stdio.h>
int countEven(int ino)
{
    int temp = 0;
    int count = 0;

    while(ino != 0)
    {
        temp = ino % 10;
        if(temp % 2 == 0)
        {
            count++;
        }
        ino = ino/10;
    }
    return count;
}

int main()
{
    int ival1 =0;
    int bRet = 0;
    printf("Enter number:\n");
    scanf("%d",&ival1);
    bRet = countEven(ival1);
    printf("%d",bRet);
    return 0;
}