#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iPos = -1;   // store last found index

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iPos = i;   // update every time found
        }
    }
    return iPos;
}

int main()
{
    int iSize = 0, i = 0, iNo = 0;
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

    printf("Enter number to find last occurrence:\n");
    scanf("%d",&iNo);

    iRet = LastOcc(p, iSize, iNo);

    if(iRet == -1)
    {
        printf("Number not found");
    }
    else
    {
        printf("Last occurrence index is: %d", iRet);
    }

    free(p);
    return 0;
}
