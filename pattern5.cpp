//* * * *
//# # # #
//* * * *
//# # # #

#include<iostream>
using namespace std;
class Pattern
{
    private: 
      int iRow;
      int iCol;
    public:
     Pattern(int x, int y)
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
                    cout<<"#\t";
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
    cout<<"enter rows:";
    cin>>iRow;
    cout<<"enter Col:";
    cin>>iCol;
    Pattern *pobj = new Pattern(iRow,iCol);
    pobj->display();

}