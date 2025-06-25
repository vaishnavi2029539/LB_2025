//write program which accept one number from user and print factors of that number.
#include<stdio.h>
void displayFactor(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if(iNo % i== 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter numbe:\n");
    scanf("%d",&iValue);
    displayFactor(iValue);
    return 0;
}