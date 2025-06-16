#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iCnt = 0;
    int *ptr = NULL;
    int iCount = 0;

    printf("Enter the number of elements\n ");
    scanf("%d",&iCnt);
    ptr = (int *)malloc(iCnt*sizeof(int));

    printf("Enter the elements: \n");

    for(iCount=0; iCount<iCnt; iCount++)//0,1,2,3,4
    {
        scanf("%d",&ptr[iCount]);
    }

    printf("Elements in the array are: \n ");
    for(iCount=0; iCount<iCnt; iCount++)//0,1,2,3,4
    {
        printf("%d\t",ptr[iCount]);
    }
    
    return 0;

}