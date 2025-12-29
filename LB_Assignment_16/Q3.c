//Write a program which accept N numbers from user and return the difference between the smallest and largest number

#include<stdio.h>
#include<stdlib.h>

int difference(int Arr[],int iLength)
{
    int iNo = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    for(iNo=0; iNo<iLength; iNo++)
    {
        if(Arr[iNo]>iMax)
        {
            iMax = Arr[iNo];
        }
        if (Arr[iNo]<iMin)
        {
            iMin = Arr[iNo];
        }
        
    }
    return  (iMax-iMin);
}

int main()
{
    int iNo = 0;
    int iSize = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iNo=0; iNo<iSize; iNo++)
    {
        printf("Enter number %d:",iNo+1);
        scanf("%d",&p[iNo]);
    }

    int iRet = difference(p, iSize);
    printf("Difference between largest and smallest number is :%d",iRet);
    free(p);
    return 0;
}