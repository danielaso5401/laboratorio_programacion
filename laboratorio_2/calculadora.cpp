#include <iostream>
using namespace std;
int main(){
  char operacion=' '; int valor=0; float decimal=0;
  cout<<"ingrese el simbolo de la operacion que quiere realizar +, -, *, /"; cin>>operacion;
  cout<<"ingrese un valor entero"; cin>>valor;
  cout<<"ingrese un decimal"; cin>>decimal;
  if (operacion=='+'){
    cout<<valor+decimal;
  }
  else if (operacion=='-'){
    cout<<valor-decimal;
  }
  else if (operacion=='*'){
    cout<<valor*decimal;
  }
  else if (operacion=='/'){
    cout<<valor/decimal;
  }
  else {
    cout<<"no ingreso un valor correcto";
  }
}