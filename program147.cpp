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
    //logics
};
int main()
{
    int iNo=0;
    int iRet =0;
    cout<<"enter the number:"<<endl;
    cin>>iNo;
    Number nobj(iNo);
    return 0;

}