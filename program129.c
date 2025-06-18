//accept char array from user and calculate length of array
#include<stdio.h>
int count(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        if(*str=='a')
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
    printf("the length of string is :%d",countOfa);
    return 0;

}
