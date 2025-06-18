//addition of even numbers//
#include<stdio.h>
#include<stdlib.h>
int evenSum(int iCnt, int arr[])
{

    int iSum = 0;
    for(int iCount=0; iCount=iCnt; iCount++)//0,1,2,3,4
    {
        if(arr[iCount]%2==0)
         iSum = iSum+arr[iCount];
        //printf("%d",arr[aiCount]);
    }
       
    printf("\n");
    return iSum;
}

int main()
{
    int iCnt = 0;
    int *ptr = NULL;
    int iCount = 0;


    printf("How many elements you wnat to store\n "); //5
    scanf("%d",&iCnt);
    ptr = (int *)malloc(iCnt*sizeof(int));
    printf("Dynamic memory alocated for %d elements \n",iCnt);

    printf("Enter the elements: \n");

    for(iCount=0; iCount<iCnt; iCount++)//0,1,2,3,4
    {
        printf("Enter value for element: %d \n",iCount+1);
        scanf("%d",&ptr[iCount]);
    }

    printf("Elements in the array are: \n ");
    int sum = evenSum(iCnt,ptr);
    printf("total count of even number is %d",sum);
    free(ptr);
    printf("Dynamic memory deallocated successfully");
    return 0;

}