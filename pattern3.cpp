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
    void dispaly()
    {
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
            {
                cout<<i<<"\t";
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
    cout<<"enter col:"<<endl;
    cin>>iCol;
    Pattern *pobj = new Pattern(iRow,iCol);
    pobj->dispaly();

}