//write a program which accept N number from user and check whether that number contain 15 in it or not

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1  
#define FALSE 0
int check(int no)
{
    int iDigit1 = 0;
    int iDigit2 = 0;
    
    while(no > 9)
    {
        iDigit1 = no % 10;
        iDigit2 = (no/10) % 10;

        if(iDigit1==1 && iDigit2==5)
        {
            return TRUE;
        }
        no = no/10;
    }
    return FALSE;
}

int main()
{
    int iSize =0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter how many number of elemnts you want to store:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    int bRet = check(int no)

    free(p);

    return 0;
}