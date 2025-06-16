//how many times a number ocures in a array//
#include<stdio.h>
#include<stdlib.h>
int frequency(int iCnt, int arr[],int iNo)
{
    int iPresent = 0;
    for(int iCount=0; iCount<iCnt; iCount++)//11,7,20,43,20
    {
        if(iNo==arr[iCount])
        {
            iPresent++;
        }
    }
    printf("\n");
   return iPresent;
    
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

    int iNo;
    printf("enter a number to search \n");
    scanf("%d",&iNo);

   
    int howmanytimes= frequency(iCnt,ptr,iNo);
    printf("%d number occured %d times in an array \n",iNo,howmanytimes);
    free(ptr);
    printf("Dynamic memory deallocated successfully");
    return 0;

}