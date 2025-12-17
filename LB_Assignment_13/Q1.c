//write a program which accept N numbers from user and return difference between addition of even elements and addition of odd elements.

#include<stdio.h>
#include<stdlib.h>
int diff(int Arr[], int length)
{
    int count = 0;
    int even = 0;
    int odd = 0;

    for(count=0; count<length;count++)
    {
        if(Arr[count]%2 == 0)
        {
            even = even+Arr[count];
        }
        else{
            odd = odd+Arr[count];
        }
    }
    return even - odd;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("enter how many no of elements want to store\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p == NULL)
    {
        printf("Unable to memory allocation \n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = diff(p,iSize);
    printf("Difference between evenSum - oddSum = %d\n",iRet);

    free(p);
    return 0;
}