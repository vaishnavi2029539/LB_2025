//write a program which accept number from user and print its number line.
//input: 5
//output: -5 -4 -3 -2 -1 0 1 2 3 4 5

#include<stdio.h>
void display(int iNo)
{
    int i = 0;
    for(i = -iNo; i<=iNo;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}