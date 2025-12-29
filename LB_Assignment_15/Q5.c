#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iLength)
{
    int i = 0;
    int iProduct = 1;
    int bOddFound = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iProduct = iProduct * Arr[i];
            bOddFound = 1;
        }
    }

    if(bOddFound == 0)
    {
        return 0;
    }
    return iProduct;
}

int main()
{
    int iSize = 0, i = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d",&p[i]);
    }

    iRet = OddProduct(p, iSize);

    if(iRet == 0)
    {
        printf("No odd elements present");
    }
    else
    {
        printf("Product of odd elements is: %d", iRet);
    }

    free(p);
    return 0;
}

