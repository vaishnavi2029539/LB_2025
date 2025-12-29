//Write a program which accept N numbers from user and and display 3 digit numbers only.

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int length)
{
    int iNo = 0;
    printf("three digit numbers are \n");
    for(iNo=0; iNo<length; iNo++)
    {
        if((Arr[iNo]>=100 && Arr[iNo]<=999) || (Arr[iNo]<= -100 && Arr[iNo]>=-999))
        {
            printf("%d\t",Arr[iNo]);
        }
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
        printf("unable to allocate the memory\n");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(iNo=0; iNo<iSize; iNo++)
    {
        printf("enter element %d:",iNo+1);
        scanf("%d",&p[iNo]);
    }
    
    display(p, iSize);
    free(p);
    return 0;
}