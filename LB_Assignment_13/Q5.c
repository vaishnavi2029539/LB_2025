//accept N number  from user and display all such a elements which are divisible by 11
#include<stdio.h>
#include<stdlib.h>

void display(int Arr[], int length)
{
    int count = 0;
    int iDigit = 0;
    for(count=0; count<length; count++)
    {
        if(Arr[count] % 11 == 0)
        {
            printf("%d\t",Arr[count]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter how many elemenst you want to store:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element%d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    display(p,iSize);
    free(p);

    return 0;
    
}