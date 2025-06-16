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
        iCol = y;
       }
    void display()
    {
        //pattern logic
        for(int iRow=1; iCol<=iRow; iRow++)//rows,outer
        {
        for(int j=1; j<=iCol; j++)//columns,inner
        {
            printf("1\t");
        }
        printf("\n");
        }
    }
};
int main()
{
    int iValue1,iValue2=0;
    cout<<"enter no of Rows:"<<endl;
    cin>>iValue1;
    cout<<"enter no of Col:"<<endl;
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.display();

}