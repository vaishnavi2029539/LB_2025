//accept n numbers from user & return smallest number//
#include<stdio.h>
#include<stdlib.h>
int Minimum(int iCnt, int arr[])
{

    int iMin = arr[0];
    for(int iCount=0; iCount<iCnt; iCount++)//11,7,20,43,25
    {
      if(iMin>arr[iCount])
      {
        iMin = arr[iCount];
      }
    }
    printf("\n");
    return iMin;
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
    int smallest = Minimum(iCnt,ptr);
    printf("smallest no is %d \n",smallest);
    free(ptr);
    printf("Dynamic memory deallocated successfully");
    return 0;

}