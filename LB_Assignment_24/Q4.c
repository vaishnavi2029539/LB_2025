/*
Write a program which accept a character from user and check whether it is small case or not (a-z)
Input: F
Output : FALSE
Input: a
Output : TRUE
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1  
#define FALSE 0
typedef int BOOL;
BOOL isSmallCase(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char ch = '\0';
    BOOL result = FALSE;
    printf("Enter character\n");
    scanf("%c",&ch);
    result = isSmallCase(ch);
    if(result == TRUE)
    {
        printf("It is small case\n");
    }
    else{
        printf("It is not small case\n");
    }
}