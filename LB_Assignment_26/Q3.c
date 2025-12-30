/*
Write a program which accept a string from user and return the difference between the count of
small and capital letters.
Input: “Fabulous”
Output = 6 (7-1)
*/
#include<stdio.h>
int CountDiff(char *str)
{
    int iSmallCnt = 0;
    int iCapitalCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iSmallCnt++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            iCapitalCnt++;
        }
        str++;
    }
    return (iSmallCnt - iCapitalCnt);
}
int main()
{
    char Arr[50];
    int iRet = 0;
    printf("Enter string:\n");
    scanf("%[^'\n']",Arr);
    iRet = CountDiff(Arr);
    printf("Difference between small and capital letters is : %d\n",iRet);
    return 0;
}