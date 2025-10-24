//write a program which accept number from user and display below pattern
//input : 4
//output : * * * * # # # #

#include<stdio.h>
void display(int iNo)
{
    for(int i = 1;i <=iNo; i++)
    {
        printf("*\t");
    }
    for(int i = 1;i <=iNo; i++)
    {
        printf("#\t");
    }

}

int main()
{
    int iVal = 0;
    printf("Enter number\n");
    scanf("%d",&iVal);
    display(iVal);
    return 0;
}