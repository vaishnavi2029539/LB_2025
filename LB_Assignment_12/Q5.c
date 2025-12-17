//write a program which accept number from user and return difference between addition of even and odd digits

#include<stdio.h>
int diffCount(int ino)
{
    int temp = 0;
    int even = 0;
    int odd = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    
    while(ino != 0)
    {
        temp = ino % 10;
        if(temp % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        ino = ino/10;
    }
    return even - odd;
}

int main()
{
    int ival = 0;
    int iRet = 0;
    printf("Enter number:\n");
    scanf("%d",&ival);
    iRet = diffCount(ival);
    printf("Multiplication of digits is: %d",iRet);
    return 0;
}