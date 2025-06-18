//Accept small charachter from user and return as a capital
#include<stdio.h>
#include<stdbool.h>
char converUppercase(char ch)
{
    return ch-32;
}
int main()
{
    char ch = '\0';
    char capitalchar = '\0';
    printf("Enter the charachter in Small \n");
    scanf("%c",&ch);
    capitalchar = converUppercase(ch);
    printf("converted small charachter is %c \n",capitalchar);
    return 0;
}