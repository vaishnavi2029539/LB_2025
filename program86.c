//accept n number from user & print that number of * //
// *    *   *   *   */
#include<stdio.h>
void display(int iNo)
{
    int iCount= 0;
    for(iCount=1; iCount<=iNo; iCount++)
    {
        printf("*\t");
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