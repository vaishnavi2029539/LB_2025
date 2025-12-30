/*
Write a program which accept a string from user and display only digits from it
Input: “Fabulous101 Infosystems Pune-411041”
Output = “101411041”
*/
#include<stdio.h>
void displayDigits(char *ch)
{
    while(*ch != '\0')
    {
        if((*ch >= '0') && (*ch <= '9'))
        {
            printf("%c", *ch);
        }
        ch++;
    }
}
int main()
{
    char arr[20];
    printf("Eneter String \n");
    scanf("%[^\n]s",arr);
    displayDigits(arr);
    return 0;
}