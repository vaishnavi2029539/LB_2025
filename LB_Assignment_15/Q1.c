//Write a program which accept N numbers from user and another number as iNo, check whether iNo is present or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int length, int iNo)
{
    int i = 0;
    int iCnt = 0;
    for(i=0; i<length; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0;
    int ival = 0;
    int i =0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements you want to store:");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements:\n",iSize);
    for(i=0; i<iSize; i++)
    {
        printf("Enter elements %d:",i+1);
        scanf("%d",&p[i]);
    }
    printf("Enter number want to search:");
    scanf("%d",&ival);
    bRet = Check(p,iSize,ival);
    if(bRet == TRUE)
    {
        printf("number is present");
    }else{
        printf("number is not present");
    }

    free(p);
    return 0;
}