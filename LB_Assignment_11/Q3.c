#include<stdio.h>

int countFiva(int ino)
{
    int temp = 0;
    int count = 0;
    temp = ino;

    while(temp != 0)
    {
        if(temp % 10 == 5)
        {
            count++;
        }
        temp = temp / 10;
    }
    return count;
}
int main()
{
    int ival1 = 0;
    printf("Enter number\n");
    scanf("%d",&ival1);
    int bret = 0;
    bret = countFiva(ival1);
    printf("%d",bret);
    return 0;
}