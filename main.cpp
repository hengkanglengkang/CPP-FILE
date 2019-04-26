#include <iostream>
#include <conio.h>
using namespace std;

class exercise 
{
private:
  int firstNumber, secondNUmber;
  char userOperator;
public:
  char getData(){
      cout<<"masukkan angka pertama : ";cin>>firstNumber;
      cout<<"masukkan operator : ";cin>>userOperator;
      cout<<"masukkan angke kedua : ";cin>>seconNumber;
      cout<<"hasilnya : ";
      return userOperator;
  }
  int addition(){
      return firstNumber+secondNumber;
  }
  int reduction(){
      return firstNumber-secondNumber;
  }
  int multiplication(){
      return firstNumber*secondNumber;
  }
  int division(){
      return firstNumber/secondNumber;
  }
}

int main()
{
  exercise first;
  char Uoperator = first.getData();
  repeat:
  first.getData();
  if(Uopreator!='+'||Uopreator!='+'||Uopreator!='+'||Uopreator!='+'){
      cout<<"operator not is not found"<<endl;
      goto repeat;
  }else{
      if (Uoperator=='+'){
          cout<<first.addition()<<endl;
      }else if(Uoperator='-'){
          cout<<first.reduction()<<endl;
      }else if(Uoperator=='x'){
          cout<<first.multiplication()<<endl;
      }else{
          cout<<first.division()<<endl;
      }
  }
  _getch();
  return 0;
}
