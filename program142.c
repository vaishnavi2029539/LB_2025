//accept string from user and convert it in to lowercase
#include<stdio.h>
void touppercase(char str[])
{
    while(*str!='\0')
    {
        char ch = *str;
        if((*str>='a') && (*str<='z'))
        {
            *str = *str-32;
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
    touppercase(Arr);
    printf("replace string is :%s",Arr);
    return 0;

}
