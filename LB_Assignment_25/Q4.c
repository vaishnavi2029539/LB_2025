/*
Accept a character from user and check it’s a special symbol or not (!,@,#,$,%,^,&,*,|{,},(,),[,]).
Input: @
Output: TRUE
*/
#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL isSpecialSymbol(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '|' || ch == '{' || ch == '}' || ch == '(' || ch == ')' || ch == '[' || ch == ']')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char ch ='\0';
    BOOL bRet = FALSE;
    printf("Enter character \n");
    scanf("%c",&ch);
    bRet = isSpecialSymbol(ch);
    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}