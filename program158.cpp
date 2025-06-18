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
};
int main()
{
  String str1(30);
  str1.accept();
  str1.display();
  return 0;
}