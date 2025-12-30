/*
Write a program which accept a string from user check if contains vowels or not
Input: “Fabulous Infosystems Pune”
Output = TRUE
Input: “xyz”
Output = FALSE
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    if(str == NULL)
    {
        return false;
    }
    while(*str != '\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||
           (*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            return true;
        }
        str++;
    }
    return false;
}
int main()
{
    char Arr[50];
    bool bRet = false;
    printf("Enter string:\n");
    scanf("%[^'\n']",Arr);
    bRet = CheckVowel(Arr);
    if(bRet == true)
    {
        printf("String contains vowels\n");
    }
    else
    {
        printf("String does not contain vowels\n");
    }
    return 0;
}