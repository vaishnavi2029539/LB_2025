//accept string and diaplay count of digits(0-9)
#include<stdio.h>
int countdigits(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        //if((*str<=65) && (*str<=90))
        if((*str>='0') && (*str<='9'))
        {
            iCounta++;
        }
        str++;
    }

    return iCounta;
}
int main()
{
    char Arr[20];
    int countOfa = 0;
    printf("Enter your string\n");
    scanf("%[^'\n']s",Arr);
    
    countOfa = countdigits(Arr);
    printf("the count of digits in string is :%d",countOfa);
    return 0;

}
