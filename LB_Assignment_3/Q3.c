//write a program which accept one number from user and print even factors of that number
#include<stdio.h>
void displayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1; i<=iNo; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    displayEvenFactor(iValue);
    return 0;

}