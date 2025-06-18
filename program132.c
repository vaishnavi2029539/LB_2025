//input any string 
//output = count of small chrachter
//input = any string
//output = small charachter
#include<stdio.h>
int count(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        //if((*str<=97) && (*str<=122))
        if((*str>='a') && (*str<='z'))
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
