//accept char array from user and calculate length of array
#include<stdio.h>
int calculateLength(char str[])
{
    int iCount = 0;
    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iLength = 0;
    printf("Enter your string\n");
    scanf("%[^'\n']s",Arr);
    
    iLength = calculateLength(Arr);
    printf("the length of string is :%d",iLength);
    return 0;

}
