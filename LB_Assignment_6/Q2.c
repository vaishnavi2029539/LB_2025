//write a program which accept number from user and print numbers till that number.
//input: 5
//output: 1 2 3 4 5
#include<stdio.h>
void display(int iNo)
{
    int i = 1;
    for(i=1;i<=iNo;i++)
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