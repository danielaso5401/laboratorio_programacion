#include <iostream>
using namespace std;
//convercion de tipos seguras
int main() {
  double d=0;
  while (cin>>d){//repite las declaraciones de abajpo
  int i= d; //intente hacerlo entrar en un entero
  char c=i;//intenta hacerlo entrar en un char
  int i2=c; //obtiene el valor entero del char
  cout<<"d=="<<d//el valor double
  <<"_i=="<<i//valor entero del char
  <<"_i2=="<<i2//valor entero del char
  <<"_char("<<c<<")\n";// el char
  }
  double x=2.7;
  int y=x; // y se convierte en 2
  int a=1000;
  char b=a; // b se convierte en -4
  
  return 0;
}