//Write a program which accept a number from user display below pattern
//Input: N ; 5
//Output : 5 # 4 # 3 # 2 # 1#

#include<stdio.h>
void display(int iNo)
{
    while(iNo != 0)
    {
        printf("%d\t#\t",iNo);
        iNo--;
    }
}

int main()
{
    int iNo = 0;
    printf("Enter number:\n");
    scanf("%d",&iNo);
    display(iNo);
    return 0;
}