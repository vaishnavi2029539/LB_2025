//average of all numbers//

#include<stdio.h>
#include<stdlib.h>
float average(int iCnt, int arr[])
{

    int iSum = 0;
    float average = 0.0f;
    //int average = iSum/iCnt;
    for (int iCount=0; iCount=iCnt; iCount++)//0,1,2,3,4
    {
        if(arr[iCount]%2!=0)
        iSum = iSum+arr[iCount];
        
    }

       
    printf("\n");
    average = ((float)iSum/(float)iCnt);
    return average;
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
    float sum = average(iCnt,ptr);
    printf("average is %f",sum);
    free(ptr);
    printf("Dynamic memory deallocated successfully");
    return 0;

}