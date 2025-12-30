/*
Write a program which accept a string from user and convert it to uppercse.
Input: “Fabulous Infosystems Pune”
Output = “FABULOUS INFOSYSTEMS PUNE”
*/
#include<stdio.h>
void toUppercase(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Eneter String \n");
    scanf("%[^\n]",arr);
    toUppercase(arr);
    printf("Uppercase string: %s\n", arr);

return 0;
}