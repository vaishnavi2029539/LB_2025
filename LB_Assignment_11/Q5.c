// write a program which accept number from user and count the frequency of a number less than 5

#include<stdio.h>

int count(int ino)
{
    int temp=0;
    int count = 0;
    temp = ino;

    while(temp != 0)
    {
        if(temp % 10 <= 5)
        {
            count++;
        }
        temp = temp/10;
    }
    return count;
}

int main()
{
    int ival = 0;
    int iret = 0;
    printf("Enter number;\n");
    scanf("%d",&ival);
    iret = count(ival);
    printf("%d",iret);
    return 0;
}