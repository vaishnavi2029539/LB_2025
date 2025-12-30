/*
Write a program which accept character a from user and check whether it is CAPITAL or not
(A-Z)
Input: F
Output : TRUE
Input: a
Output : FALSE
*/
#include<stdio.h.>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL isCapital(char ch)
{
    if(ch>='A'&& ch<='Z')
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
    result = isCapital(ch);
    if(result == TRUE)
    {
        printf("IT is capital\n");
    }
    else{
        printf("It is no caapital\n");
    }
}