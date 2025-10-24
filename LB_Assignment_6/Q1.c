//write a program which accept a number from user and print that number of $ and * on console
//input: 5
//output: $ * $ * $ * $ * $ *
#include<stdio.h>
void Pattern(int iNo)
{
    int i = 0;
    for(i = 1;i<=iNo*2;i++)
    {
        if(i%2==0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}