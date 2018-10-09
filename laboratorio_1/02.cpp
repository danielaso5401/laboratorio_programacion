#include <iostream>
using namespace std;
int main() {
  cout<<"ingresa un numero entero"; int valor; cin>>valor;
  cout<<"ingres un segundo numero entero"; int valor2; cin>>valor2;
  if (valor>valor2){
    cout<<"\n"<<valor<<" es mayor \n"<<valor2<<" es menor \n";
  }
  if (valor2>valor){
    cout<<"\n"<<valor2<<" es mayor \n"<<valor<<" es menor \n";
  }
  int res=valor+valor2; int res2=valor-valor2; int res3=valor*valor2; int res4=valor/valor2;
  cout<<res<<"\n"<<res2<<"\n"<<res3<<"\n"<<res4<<"\n";
  

  return 0;
}