//input accept string 
//output count of capital vowels
#include<stdio.h>
int countvowels(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        char ch = *str;
        if(ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
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
    
    countOfa = countvowels(Arr);
    printf("the count of digits in string is :%d",countOfa);
    return 0;

}
