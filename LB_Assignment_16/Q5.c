//Write a program which accept N numbers from user and display the addition of digits of each number
#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int length)
{
    int iNo = 0;
    int i = 0;
    int iDigit = 0;
    int iSum = 0;

    for(i = 0; i<length; i++)
    {
        iNo = Arr[i];
        iSum = 0;
        if(iNo<0)
        {
            iNo = -iNo;
        }
        while(iNo!=0)
        {
            iDigit = iNo % 10;
            iSum = iSum+iDigit;
            iNo = iNo/10;
        }
        printf("Sum of all digits are : %d\n",iSum);
    }
}
int main()
{
    int iNo = 0;
    int iSize = 0;
    int *p = NULL;
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memrory\n");
        return -1;
    }
    for(iNo =0; iNo<iSize; iNo++)
    {
        printf("Enter elemet %d:",iNo+1);
        scanf("%d",&p[iNo]);
    }
    display(p, iSize);
    free(p);
    return 0;
}