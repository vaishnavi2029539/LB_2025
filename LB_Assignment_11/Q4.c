//write a program which accpet number from user count the frequency of 2 in it.

#include<stdio.h>

int countTwo(int ino)
{
    int temp=0;
    int count = 0;
    temp = ino;
    while(temp != 0)
    {
        if(temp % 10 == 2)
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
    printf("Enter number:\n");
    scanf("%d",&ival);
    iret = countTwo(ival);
    printf("%d",iret);
    return 0;
}
    
