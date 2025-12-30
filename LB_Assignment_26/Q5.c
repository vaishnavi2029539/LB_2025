/*Write a program which accept a string from user and display it in reverse order.
Input : “Fabulous”
Output = “suolubaF”
*/
#include<stdio.h>
void StrRev(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    if(str == NULL)
    {
        return;
    }

    while(*end != '\0')
    {
        end++;
    }
    end--; 
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char arr[20];
    printf("Eneter String \n");
    scanf("%[^\n]",arr);
    StrRev(arr);
    printf("Reversed string: %s\n", arr);
    return 0;
}