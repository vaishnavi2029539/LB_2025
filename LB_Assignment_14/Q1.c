//accept N number froom user and return the frequency of even number

#include<stdio.h>
#include<stdlib.h>

int displayEven(int Arr[],int length)
{
    int Count = 0;
    int iDigit = 0;

    for(iDigit=0; iDigit<length; iDigit++)
    {
        if(Arr[iDigit]%2 == 0)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter how many elements you want to store:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iCnt = displayEven(p, iSize);
    printf("evencount = %d",iCnt);
    free(p);

    return 0;
}