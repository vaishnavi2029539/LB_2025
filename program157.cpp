//accept the string and display it
#include<iostream>
using namespace std;

class String
{
  private:
    char *str;
  public:
    String()
    {
      str = new char[20];   
    }
    String(int isize)
    {
      str = new char[isize];
    }
    ~String()
    {
      delete []str;
    }
    void accept()
    {
      cout<<"enter the string"<<endl;
      gets(str);
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