//accept number from user and display all such elements which are divisible by 3 & 5

#include<stdio.h>
#include<stdlib.h>

void displayDivisibleBy3and5(int Arr[],int length)
{
    int Count = 0;
    int iDigit = 0;

    for(Count=0; Count<length; Count++)
    {
        if((Arr[Count]%3==0) && (Arr[Count]%5==0))
        {
            printf("%d\t",Arr[Count]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter how many no of elements you want to store\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("enter %d elments\n",iSize);
    for(iCnt=0; iCnt<iSize; iSize++)
    {
        printf("enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    displayDivisibleBy3and5(p, iSize);
    free(p);

    return 0;
}