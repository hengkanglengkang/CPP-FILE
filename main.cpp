#include <iostream>
#include <conio.h>
using namespace std;

class exercise 
{
private:
  int number;
public:
  exercise(){
    cout<<"enter the number : ";cin>>number;
  }
  int printNumber(){
     return number;
  }
}

int main()
{
  exercise first;
  cout<<first.printNumber<<endl;
  _getch();
  return 0;
}
