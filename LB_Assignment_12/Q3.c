//write a program which accept number from user and return the count of digits in between 3 and 7 

#include<stdio.h>
int countRange(int ino)
{
    int iDigit = 0;
    int count = 0;
     
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit%10>=3 && iDigit%10<=7)
        {
            count++;
        }
        ino = ino/10;
    }
    return count;

}
int main()
{
    int ival1 = 0;
    int iRet = 0;
    printf("Enter number:\n");
    scanf("%d",&ival1);
    iRet = countRange(ival1);
    printf("count of odd number is: %d",iRet);
    return 0;
}