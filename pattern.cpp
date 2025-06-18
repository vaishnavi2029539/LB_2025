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
        //pattern logic
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++)
            {
                cout<<"*\t";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    int iValue1,iValue2=0;
    cout<<"enter no of rows:"<<endl;
    cin>>iValue1;
    cout<<"enter no of colmns:"<<endl;
    cin>>iValue2;
    Pattern *pobj = new Pattern(iValue1,iValue2);
    pobj->display();
}