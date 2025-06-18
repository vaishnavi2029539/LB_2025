#include<stdio.h>
#include<stdbool.h>

bool chekEven(int number)
{
    if(number%2==0)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRes=false;

    printf("Enter the number \n");
    scanf("%d",&iNo);

    bRes = chekEven(iNo);

    if(bRes==true)
    {
        printf("%d is an even number");
    }else{
        printf("%d is an number");
    }
    return 0;
}