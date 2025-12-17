//write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>
void displayReverseDigit(int ino)
{
    int iDigit = 0;
    if(ino<0)
    {
        ino = -ino;
    }

    while(ino!=0)
    {
        iDigit = ino%10;
        printf("%d\n",iDigit);
        ino = ino/10;
    }

}

int main()
{
    int ivalue = 0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);
    displayReverseDigit(ivalue);
    return 0;
}