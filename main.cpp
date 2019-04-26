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
  char userOption;
  while(true){
      cout<<"do you want : ";cin>>userOption;
      if(userOption=='y'){
        exercise first;
        char UOperator = first.getData();
         repeat:
        first.getData();
        if(UOpreator!='+'||UOpreator!='+'||UOpreator!='+'||UOpreator!='+'){
            cout<<"operator not is not found"<<endl;
            goto repeat;
        }else{
            if (UOperator=='+'){
                cout<<first.addition()<<endl;
            }else if(UOperator='-'){
                cout<<first.reduction()<<endl;
             }else if(UOperator=='x'){
                cout<<first.multiplication()<<endl;
            }else{
                cout<<first.division()<<endl;
            }
        }
     }
     else{
         break;
     }
  }
  _getch();
  return 0;
}
