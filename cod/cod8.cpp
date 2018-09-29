#include <iostream>
using namespace std;
int main() {
  double total; 
  double valor;
  cout<<"ingrese la cantidad de dinero que cambiara"; cin>>valor;
  char selec;
  cout<<"ingrese al tipo de moneda que cambiara\n ingrese y para cambiar a yenes\n ingresa e para cambiar a euros\n ingresa l para cambiar a libras\n ingresa d para hacer un cambio de estas a dolares"; cin>>selec;
  if(selec=='y'){
    total=valor*0.089;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"yenes";
  }
  if(selec=='e'){
    total=valor*1.18;
#include <iostream>
#include <math.h>
using namespace std;
int square(int x)
{
  return x*x;  
}
int main() {
  int i=0; //empieza en sero
  while(i<100){
    cout<<i<<'\t'<<square(i)<<'\n';
    ++i; //incremtno
  }
  return 0;
}