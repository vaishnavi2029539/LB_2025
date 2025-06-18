//Accept capital charachter from user and return as a small
#include<stdio.h>
#include<stdbool.h>
char converLowercase(char ch)
{
    return ch+32;
}
int main()
{
    char ch = '\0';
    char smallchar = '\0';
    printf("Enter the charachter in capital \n");
    scanf("%c",&ch);
    smallchar = converLowercase(ch);
    printf("converted small charachter is %c \n",smallchar);
    return 0;
}