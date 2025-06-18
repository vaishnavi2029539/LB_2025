//accept string from user and replace vowels with _
#include<stdio.h>
void replace(char str[])
{
    while(*str!='\0')
    {
        char ch = *str;
        if(ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U' || ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u')
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
