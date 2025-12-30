/*
Input: “Fabulous Infosystems Pune”
Output = 3
*/
#include<stdio.h>
void whiteSpaceCount(char *str, int *iCount)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            (*iCount)++;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Eneter String \n");
    scanf("%[^\n]",arr);
    whiteSpaceCount(arr, &iRet);
    printf("Number of white spaces: %d\n", iRet);
    return 0;
}