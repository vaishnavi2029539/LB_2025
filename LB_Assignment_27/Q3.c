/*
Write a program which accept a string from user and toggle the case.
Input: “Fabulous Infosystems Pune”
Output = “fABULOUS iNFOSYSTEMS pUNE”
*/
#include<stdio.h>
void toggleCase(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; // Convert to lowercase
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; // Convert to uppercase
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter String \n");
    scanf("%[^\n]",arr);
    toggleCase(arr);
    printf("Toggled case string: %s\n", arr);
return 0;
}