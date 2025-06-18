//Factorial of number
#include<iostream>
using namespace std;
class Number
{
    private:
      int iNo;
    public:
      Number(int x)
      {
        iNo=x;
      }
    int Factorial()
    {
        int iFact=1,iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
};
int main()
{
    int iNo=0;
    int iRet=0;
    cout<<"enter number:"<<endl;
    cin>>iNo;
    Number *nobj = new Number(iNo);
    iRet = nobj->Factorial();
    cout<<"Factorial is:"<<iRet<<endl;
    delete nobj;
    return 0;

}