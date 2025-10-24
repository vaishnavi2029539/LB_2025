//write a program t find odd factors of a number 
//input : 5 
//outpt : 15

#include<stdio.h>
int EvenOddFactdiff(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    int iEvenFact = 1;
    int iOddFact = 1;

    for(int i = iNo; i>=1; i--)
    {
        if(i%2!=0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }
    return iEvenFact-iOddFact;
}
int main()
{
    int iVal = 0;
    printf("Enter number\n");
    scanf("%d",&iVal);
    int iFact = EvenOddFactdiff(iVal);
    printf("difference between Even Factorial and odd factorial of number is : %d",iFact);
    return 0 ;

}