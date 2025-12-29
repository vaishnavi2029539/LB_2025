//Write a program which accept N numbers from user and another number as iNo, retun the index of its first occurrence of iNO

#include<stdio.h>
#include<stdlib.h>

int firstOccurence(int Arr[], int length,int iNo)
{
    int i = 0;
    for(i = 0; i<length; i++)
    {
        if(Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int i = 0;
    int iNo = 0;
    int iSize = 0;
    int* p = NULL;
    int iRet = 0;

    printf("Enter how many number you want to store:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate the memory\n");
        return -1;
    }

    printf("enter %d elements:",iSize);
    for(i=0; i<iSize; i++)
    {
        printf("enter elements %d:",i+1);
        scanf("%d",&p[i]);
    }
    printf("enter number you want to search:\n");
    scanf("%d",&iNo);
    iRet = firstOccurence(p,iSize,iNo);

    if(iRet==-1)
    {
        printf("Number not found\n");
    }
    else
    {
        printf("Number available at index %d",iRet);
    }
    free(p);
    return 0;
    }