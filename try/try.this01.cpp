#include <iostream>
using namespace std;
int main() {
  double total;
  double  valor;
  cout<<"ingresa la cantidad que desea convertir"; cin>>valor;
  char selec;
  cout<<"ingrese la letra y para convertir en yenes \ningrese e para convertir en euros \ningresa l para convertir en libras\n ingres s para convertir a shekels\n ingresa u para yuanes\n ingrese d para convertir de otra moneda a posible a dolar"; cin>>selec;
  char selec2;
  switch (selec){
  case 'y':
    total=valor*0.089;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"yenes";
    break;
  case 'e':
    total=valor*1.18;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"euros";
    break;
  case 'l':
    total=valor*1.31;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"libras";
    break;
  case 's':
    total=valor*0.28;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"shekels";
    break;
  case 'u':
    total=valor*0.15;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"yuanes";
    break;
  case 'd':
    cout<<"ingrese y si lo convertira a yenes \n ingrese e si lo convertira a euros \n ingrese l para convertira de libras\n ingrese s para convertira a shekels\n ingresa u si lo convertira a yuanes";
    cin>>selec2;
    switch (selec2){
      case 'y':
        total=valor*112.57;
        cout<<"su cambio es de "<<valor<<" yenes "<<"a $"<<total<<"dolares";
        break;
      case 'e':
        total=valor*0.85;
        cout<<"su cambio es de "<<valor<<" euros "<<"a $"<<total<<"dolares";
        break;
      case 'l':
        total=valor*0.76;
        cout<<"su cambio es de "<<valor<<" libras "<<"a $"<<total<<"dolares";
        break;
      case 's':
        total=valor*3.57;
        cout<<"su cambio es de "<<valor<<" shekels "<<"a $"<<total<<"dolares";
        break;
      case 'u':
        total=valor*6.86;
        cout<<"su cambio es de "<<valor<<" uanes "<<"a $"<<total<<"dolares";
        break;
      default:
        cout<<"lo lamento no reconozco "<<selec2<<" es invalido";
        break;
    }
    break;
  default:
      cout<<"\n lo lamento no reconozco "<<selec<<" es invalido";
      break;
  }

  return 0;
}