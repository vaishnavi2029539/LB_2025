//* * * *
//2 2 2 2
//* * * *
//4 4 4 4 
#include<iostream>
using namespace std;

class Pattern
{
    private:
      int iRow;
      int iCol;
    public:
      Pattern(int x,int y)
      {
        iRow=x;
        iCol=y;
      }
    void display()
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
            {
                if(i%2==0)
                {
                    cout<<i<<"\t";
                }else{
                    cout<<"*\t";
                }
            }
            cout<<"\n";
        }
    }  
};
int main()
{
    int iRow;
    int iCol;
    cout<<"enter row:"<<endl;
    cin>>iRow;
    cout<<"enter col:"<<endl;
    cin>>iCol;
    Pattern *aobj = new Pattern(iRow,iCol);
    aobj->display();
    delete aobj;
}