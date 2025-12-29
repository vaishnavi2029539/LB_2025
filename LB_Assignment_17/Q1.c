//Write a program which accept a number from user display below pattern
//Input: N ;5
//Output : A B C D E

#include<stdio.h>
void display(int iNo)
{
    char ch = 'A';
    for(int i= 1;i<=iNo;i++)
    {
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    int iNo = 0;
    printf("Enter Number:\n");
    scanf("%d",&iNo);
    display(iNo);
    return 0;
}