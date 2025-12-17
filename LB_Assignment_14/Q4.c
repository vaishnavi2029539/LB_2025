// write a program which accept N numbers from user and retuen frequency of 15 from it
#include<stdio.h>
#include<stdlib.h>
int frequency(int Arr[], int length)
{
    int iCnt = 0;
    int iDigit1 = 0;
    int iDigit2 =0;
    int fre = 0;

    for(iCnt=0; iCnt<length; iCnt++)
    {
        int no = Arr[iCnt];
        while(no>9)
        {
            iDigit1 = no%10;
            iDigit2 = (no/10)%10;
            if(iDigit2==1 && iDigit1==5)
            {
                fre++;
            }
            no = no/10;
        }
    }
    return fre;
}
int main()
{
    int iSize = 0;
    int Count = 0;
    int *p = NULL;
    int iCnt = 0;
    printf("Enter how many number of elemenets you want to store:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate the memory\n");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    for(Count=0; Count<iSize; Count++)
    {
        printf("Enter elemenst %d:",Count+1);
        scanf("%d",&p[Count]);
    }
    int iRet = frequency(p,iSize);
    printf("frequency of 15 is:%d",iRet);
    free(p);
    return 0;
}
