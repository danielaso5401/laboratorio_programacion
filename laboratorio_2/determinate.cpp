#include <iostream>
using namespace std;
int main() {
  int numero=0; int total=0;
  cout<<"ingrese un numero"; cin>>numero;
  total=numero%2;
  if (total==0){
    cout<<numero<<" es par";
  }
  if (total==1){
    cout<<numero<<" es impar";
  }
}