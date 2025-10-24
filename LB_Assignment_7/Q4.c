//write a program to accept a number from user and display its table
//input : 2
//output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>
int printTable(int iNo)
{
    for(int i = 1; i<=10; i++)
    {
        printf("%d \n",iNo * i);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    printTable(iValue);
    return 0;
}