//addition of even number from n number of array
#include<iostream>
using namespace std;
class Array
{
    private:
       int iSize;
       int *Arr;
    public:
      Array(int x) //parametarized constructor
      {
        iSize = x;
        Arr = new int[iSize];
      }
      ~Array() //deconstructor
      {
        delete[]Arr;
      }
      //member function
    void accept()
    {
        cout<<"Enter the elements of array:"<<endl;
        int iCnt= 0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void display()
      {
        cout<<"Elements of the array are:"<<endl;
        int iCnt = 0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<endl;
      }
    
    int AdditionEven()
    {
        int iCnt = 0 ,iSum= 0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                iSum = iSum+Arr[iCnt];
            }   
        }
         return iSum;
    }
};

int main()
{
    int iLength = 0;
    cout<<"enter the number of elements that you want to store"<<endl;
    cin>>iLength;
    Array *aobj = new Array(iLength);
    aobj->accept();
    aobj->display();
    int iRet = aobj->AdditionEven();
    cout<<"Addition of even number is:"<<iRet<<endl;
    delete aobj;
    return 0;
}