#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d ", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, i = 0;
    int iStart = 0, iEnd = 0;
    int *p = NULL;

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

    printf("Enter start of range:\n");
    scanf("%d",&iStart);

    printf("Enter end of range:\n");
    scanf("%d",&iEnd);

    printf("Elements in the range %d to %d are:\n", iStart, iEnd);
    DisplayRange(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}
