#include<iostream>
using namespace std;
class Pattern
{
    public:
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
                cout<<j<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    int iRow=0;
    int iCol=0;
    cout<<"enter rows:"<<endl;
    cin>>iRow;
    cout<<"enter Col:"<<endl;
    cin>>iCol;
    Pattern *aobj = new Pattern(iRow,iCol);
    aobj->display();
}