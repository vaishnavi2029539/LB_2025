/*
Write a program which accept a character from user and check whether it is alphabet or not (A-Z a-z)

Input: F
Output : TRUE
Input: $
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL isAlphabet(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
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
    result = isAlphabet(ch);
    if(result == TRUE)
    {
        printf("it is a alphabet\n");
    }
    else{
        printf("it is not a alphabet\n");
    }
}
