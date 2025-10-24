//write a program which accept number from user and print multiplies of number //
//input: 4
//output: 4 8 12 16 20 

#include<stdio.h>
void display(int iNo)
{
    int i = 0;
    for(i = 1; i<=iNo; i++)
    {
        printf("%d\t",i*iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}