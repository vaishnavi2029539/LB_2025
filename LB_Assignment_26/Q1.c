/*
Write a program which accept a string from user and count number of capital letters.
Input: “Fabulous Infosystems Pune”
Output = 3
*/
#include<stdio.h>
#include<stdbool.h>
int CapitalCount(char *str)
{
    int iCnt = 0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
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
    iRet = CapitalCount(Arr);
    printf("Number of capital letters are : %d\n",iRet);
    return 0;
}