//accept string from user and display count of spaces
#include<stdio.h>
int countOfWhitespace(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        char ch = *str;
        if(ch == ' ')
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
    
    countOfa = countOfWhitespace(Arr);
    printf("the count of digits in string is :%d",countOfa);
    return 0;

}
