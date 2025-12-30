/*
2. Accept a character from user. if character is small display its capital character, and if its capital
then display its small in other cases display as it i.
Input: Q
Output: q
Input: s
Output: S
Input: 10
Output: 10
*/
#include<stdio.h>
#include<stdbool.h>
void display(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        printf("%c\n",ch-32);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c\n",ch+32);
    }
    else
    {
        printf("%c\n",ch);
    }
}
int main()
{
    char ch ='\0';
    printf("Eneter chaaracter \n");
    scanf("%c",&ch);
    display(ch);
}