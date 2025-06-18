////input 4
//a b c d 
#include<stdio.h>
void display(int iNo)
{
    int iCount= 0;
    char ch='\0';
    //char ch = 'd';
    for(iCount=1,ch='a'; iCount<=iNo; iCount++,ch++)//industialization way
    {
      printf("%c\t",ch);
      //ch--;
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number: \n");
    scanf("%d",&iNo);
    
    display(iNo); 
    return 0;
}