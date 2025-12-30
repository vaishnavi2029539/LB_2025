/*
Accept a character from user, if it is capital then display all the characters from the input
character till Z, and is small then print all the characters from input character till a in reverse
order. in other cases return directly.
Input: Q
Output: Q R S T U V W X Y Z
Input: h
Output: h g f e d c b a
Input: 10
Output:
*/
#include<stdio.h>
void display(char ch)   
{
    if(ch>='A' && ch<='Z')
    {
        for(char c=ch;c<='Z';c++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
    else if(ch>='a' && ch<='z')
    {
        for(char c=ch;c>='a';c--)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}
int main()
{
    char ch ='\0';
    printf("Enter character \n");
    scanf("%c",&ch);
    display(ch);
    return 0;
}