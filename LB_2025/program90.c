//input 4
//1 #   2   #   3   #   4   #
#include<stdio.h>
void display(int iNo)
{
    int iCount= 0;
    for(iCount=1; iCount<=iNo; iCount++)
    {
        printf("%d\t#\t",iCount);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number: \n");
    scanf("%d",&iNo);
    
    display(iNo); 
    return 0;
}