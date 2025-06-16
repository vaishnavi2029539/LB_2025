#include<stdio.h>
int main()
{
    char ch = '\0';
    printf("enter the character\n");
    scanf("%c",&ch);

    printf("DEcimal value of charachter is :%d\n",ch);
    printf("Octal value of charachter is :%o\n",ch);
    printf("hexadecimalvalue of charachter is :%x\n",ch);
    return 0;
}