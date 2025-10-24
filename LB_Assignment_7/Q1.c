//write a program which accept number from user and if number is less than 50 then print small, if it greater than 50 and less than 100 then print medium, if it is grater than 100 then print large
//input : 75
//output : medium

#include<stdio.h>
void display(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium\n");
    }else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0 ;
}