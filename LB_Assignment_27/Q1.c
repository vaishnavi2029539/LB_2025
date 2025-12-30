/*
Write a program which accept a string from user and convert it to lowercase.
Input: “Fabulous Infosystems Pune”
Output = “fabulous infosystems pune”
*/
#include<stdio.h>
void toLowercase(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Eneter String \n");
    scanf("%[^\n]",arr);
    toLowercase(arr);
    printf("Lowercase string: %s\n", arr);

return 0;
}