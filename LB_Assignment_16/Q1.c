// Write a program which accept N numbers from user retur the largest number from it

#include<stdio.h>
#include<stdlib.h>

int Greatest(int Arr[], int ilength)
{
    int i=0;
    int iMax = Arr[0];
    for(i=0; i<ilength; i++)
    {
        if(Arr[i]>iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("enter %d elements\n ",iSize);

    for(iNo=0; iNo<iSize; iNo++)
    {
        printf("enter elements %d:",iNo+1);
        scanf("%d",&p[iNo]);
    }

    int iRet = Greatest(p, iSize);
    printf("greatest number is %d",iRet);

    free(p);
    return 0;
}