//write a program which accept number from user and print all odd numbers up to that number
//input: 18
//output: 1 3 5 7 9 11 13 15 17

#include<stdio.h>
void oddDisplay(int iNo)
{
    int i = 0;
    for(i = 1;i<=iNo; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    oddDisplay(iValue);
    return 0;
}