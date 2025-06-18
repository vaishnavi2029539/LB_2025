//accept string from user and convert it in to lowercase into upper and upper to lower
#include<stdio.h>
void strtoggle(char str[])
{
    while(*str!='\0')
    {
        char ch = *str;
        if((*str>='a') && (*str<='z'))
        {
            *str = *str-32;
        }else if ((*str>='A') && (*str<='Z'))
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
    strtoggle(Arr);
    printf("toggle string is :%s",Arr);
    return 0;

}
