/*
Write a program which accept a string from user and count number of small letters.
Input: “Fabulous”
Output = 7
*/
#include<stdio.h>
int SmallCount(char *str)
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[50];
    int iRet = 0;
    printf("Enter string:\n");
    scanf("%[^'\n']",Arr);
    iRet = SmallCount(Arr);
    printf("Number of small letters are : %d\n",iRet);
    return 0;
}