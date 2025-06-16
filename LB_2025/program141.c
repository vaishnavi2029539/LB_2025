//accept string from user and convert it in to lowercase
#include<stdio.h>
void tolowercase(char str[])
{
    while(*str!='\0')
    {
        char ch = *str;
        if((*str>='A') && (*str<='Z'))
        {
            *str = *str+32;
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
    tolowercase(Arr);
    printf("replace string is :%s",Arr);
    return 0;

}
