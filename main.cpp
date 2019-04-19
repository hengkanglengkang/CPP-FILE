#include <iostream>
#include <conio.h>
using namespace std;

class exercise 
{
private:
  string name;
public:
  exercise(){
    cout<<"enter your name : ";cin>>name;
  }
  void printName(){
     cout<<"hai <<name<<endl;
  }
}

int main()
{
  exercise first;
  cout<<first.printNumber<<endl;
  _getch();
  return 0;
}
