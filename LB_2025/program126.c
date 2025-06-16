#include<stdio.h>
void display(char *str)
{
    printf("enter a string is :%s\n",str);

}
int main()
{
    char Arr[20];
    printf("Enter your string\n");
    scanf("%[^'\n']s",Arr);
    display(Arr);//call by address
    return 0;

}