//write a program t find odd factors of a number 
//input : 5 
//outpt : 15

#include<stdio.h>
int OddFactor(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    int Fact = 1;
    for(int i = iNo; i>=1; i--)
    {
        if(i%2!=0)
        {
            Fact = Fact * i;
        }
    }
    return Fact;
}
int main()
{
    int iVal = 0;
    printf("Enter number\n");
    scanf("%d",&iVal);
    int iFact = OddFactor(iVal);
    printf("Odd Factorial of number is : %d",iFact);
    return 0 ;

}