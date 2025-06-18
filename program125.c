#include<stdio.h>
int main()
{
    char Arr[20];
    printf("Enter your string\n");
    scanf("%[^'\n']s",Arr);
    printf("entered string is :%s\n",Arr);
    return 0;

}