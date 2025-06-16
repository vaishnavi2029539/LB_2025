//accept string from user and replace a with _
#include<stdio.h>
void replace(char str[])
{
    while(*str!='\0')
    {
        if(*str == 'a')
        {
            *str = '_';
        }
        str++;
    }

    
}
int main()
{
    char Arr[20];
    int countOfa = 0;
    printf("Enter your string\n");
    scanf("%[^'\n']s",Arr);
    replace(Arr);
    printf("replace string is :%s",Arr);
    return 0;

}
