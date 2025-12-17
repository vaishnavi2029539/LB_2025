//Write a program which accept N numbers from user and accept one number as iNO, returnthe frequency of iNo from it.

#include<stdio.h>
#include<stdlib.h>

int frequency(int Arr[], int length, int iNo)
{
    int iCnt = 0;
    int i = 0;
    for (i = 0; i<length; i++)
    {
        if(Arr[i]==iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int Count = 0;
    int *p = NULL;
    int ival = 0;
    printf("Enter how many number of elements you want to store:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Enable to allocate the memory\n");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(Count=0; Count<iSize; Count++)
    {
        printf("Enter elements %d:",Count+1);
        scanf("%d",&p[Count]);
    }
    printf("enter the number to check frequency:");
    scanf("%d",&ival);
    int iRet = frequency(p,iSize,ival);
    printf("frequency of %d is:%d",ival,iRet);
    free(p);        
    return 0;
}