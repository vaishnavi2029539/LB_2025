////* *   *   * 
//* *   *   * 
//* *   *   * 
//* *   *   *   
#include<stdio.h>
void display()
{
    
     for(int i=1; i<=3; i++)//rows,outer
     {
        for(int j=1; j<=5; j++)//columns,inner
        {
            printf("*\t");
        }
        printf("\n");
     }
    
}

int main()
{   
    display(); 
    return 0;
}