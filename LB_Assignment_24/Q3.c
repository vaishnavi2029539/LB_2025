/*
Write a program which accept a character from user and check whether it is digit or not (0-9)
Input: 7
Output : TRUE
Input: h
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL isDigit(char ch)
{
    if(ch>='0'&& ch<='9')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char ch ='\0';
    printf("Enter character\n");
    scanf(" %c",&ch);
    BOOL result = isDigit(ch);
    if(result == TRUE)
    {
        printf("It is a digit\n");
    }
    else{
        printf("It is not a digit\n");
    }
}