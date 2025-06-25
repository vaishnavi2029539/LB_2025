#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkVOwel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o'|| ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' ||ch == 'U')
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter charachter \n");
    scanf("%c",&cValue);
    bRet = checkVOwel(cValue);
    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }else{
        printf("it is not vowel\n");
    }
}
