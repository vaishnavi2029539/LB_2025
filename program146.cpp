//factorial of number 
#include<iostream>
using namespace std;
int Factorial(int iNo)
{
    int iFact=1,iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}
int main()
{
    int iNo=0;
    int iRet=0;
    cout<<"enter a number:"<<endl;
    cin>>iNo;
    iRet=Factorial(iNo);
    cout<<"Factorial is:"<<iRet<<endl;
    return 0 ;
}