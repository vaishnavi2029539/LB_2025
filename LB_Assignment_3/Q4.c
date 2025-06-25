//Accept one characher from user and convert uppercase of that charachter 
#include<stdio.h>
void displayConver(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("%c\n",cValue+32);
    }else if(cValue>='a' && cValue<='z')
    {
        printf("%c\n",cValue-32);
    }
}
int main()
{
    char cValue = 0;
    printf("Enter charachter:\n");
    scanf("%c",&cValue);
    displayConver(cValue);
    return 0;
}