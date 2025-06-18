#include<stdio.h>
#include<stdbool.h>
bool checkCapital(char chValue)
{
    if((chValue>=65) && (chValue<=90))
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
    bool bRet = checkCapital(ch);
    if(bRet==true)
    {
        printf("its Capital");
    }
    else
    {
        printf("its not Capital");
    }
    return 0;
}