//Write a program which accept N numbers from user and return the smallest numbe.

#include<stdio.h>
#include<stdlib.h>

int Smallest(int Arr[], int ilength)
{
    int i =0;
    int iMin = Arr[0];

    for(i=0; i<ilength; i++)
    {
        if(Arr[i]<iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    int iRet = Smallest(p, iSize);
    printf("Smallest number is :%d",iRet);
    free(p);
    return 0;
}