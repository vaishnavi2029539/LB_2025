//input = any string
//output = capital charachter
#include<stdio.h>
int count(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        //if((*str<=65) && (*str<=90))
        if((*str>='A') && (*str<='Z'))
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
    
    countOfa = count(Arr);
    printf("the length of small string is :%d",countOfa);
    return 0;

}
