#include<stdio.h>
#include<stdbool.h>
bool checkSmall(char chValue)
{
    if((chValue>='a') && (chValue<='z'))
    {
        return true;
    }else{
        return false;
    }
   
}
int main()
{
    char ch = '\0';
    
    printf("Enter the charachter \n");
    scanf("%c",&ch);
    bool bRet = checkSmall(ch);
    if(bRet==true)
    {
        printf("its small");
    }
    else
    {
        printf("its Capital");
    }
    return 0;
}