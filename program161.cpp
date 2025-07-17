//accept the string and display it
#include<iostream>
using namespace std;

class String
{
  private:
    char *str;
    int iSize;
  public:
    String()
    {
      iSize = 20;
      str = new char[20];   
    }
    String(int x)
    {
        iSize = x;
        str = new char[x];
    }
    ~String()
    {
      delete []str;
    }
    void accept()
    {
      cout<<"enter the string"<<endl;
      cin.getline(str,iSize);
      //gets(str);
    }
    void display()
    {
      cout<<"string is:"<<str<<endl;
    }

    int countCapital()
    {
        int iCnt = 0;
        while(*str!='\0')
        {
            if((*str>='A') && (*str<='Z'))
            {
                iCnt++;
            }
            str++;
        }
        return iCnt;
    }
};
int main()
{
  String *sobj1 = new String(30);
  int count = 0;
  sobj1->accept();
  
  count = sobj1->countCapital();
  cout<<"count of capital letters is:"<<count<<endl;
  sobj1->display();
  delete sobj1;
  return 0;
}