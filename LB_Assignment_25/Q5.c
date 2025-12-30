/*
Accept a character from userand display its ASCII value in decial format
Input: A
Output: Decimal = 65
*/
#include<stdio.h>
void display(char ch)
{
    printf("Decimal = %d\n",ch);
}
int main()
{
    char ch ='\0';
    printf("Enter character \n");
    scanf("%c",&ch);
    display(ch);
    return 0;
}