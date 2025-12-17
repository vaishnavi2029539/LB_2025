//write a program which accept N number from user and return the difference between ther frequency of even nad odd number 

#include<stdio.h>
#include<stdlib.h>

int diffEvenOdd(int Arr[], int length)
{
    int EvenCount = 0;
    int OddCount = 0;
    int iDigit = 0;

    for(iDigit=0; iDigit<length; iDigit++)
    {
        if(Arr[iDigit]%2==0)
        {
            EvenCount++;
        }
        else{
            OddCount++;
        }
    }
    return EvenCount - OddCount;
}

int main()
{
    int iSize =0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter how many number of elemnts you want to store:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iCnt = diffEvenOdd(p, iSize);
    printf("diff %d",iCnt);

    free(p);

    return 0;
}