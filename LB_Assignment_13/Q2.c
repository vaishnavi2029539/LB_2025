//Accept N number from user nad display all such elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void displaydivisibleBy5(int Arr[], int length)
{
    int Count = 0;
    int iDigit = 0;

    for(Count=0; Count<length; Count++)
    {
        if((Arr[Count] %2 == 0) && (Arr[Count] % 5 == 0))
        {
            printf("%d",Arr[Count]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter hoe many number you want to stor:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memeory\n");
    }

    printf("Enter %d elemenst:\n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter number %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    displaydivisibleBy5(p, iSize);

    free(p);

    return 0;
}