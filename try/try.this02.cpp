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
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"euros";
  }
  if(selec=='l'){
    total=valor*1.31;
    cout<<"su cambio es de $"<<valor<<" dolares "<<"a "<<total<<"libras";
  }
  if(selec=='d'){
    char selec2;
    cout<<"ingrese y si lo convertira a yenes\n ingrese e si lo convertira a euros\n ingrese l para convertira de libras\n";cin>>selec2;
    if(selec2=='y'){
      total=valor*112.57;
      cout<<"su cambio es de "<<valor<<" yenes "<<"a $"<<total<<"dolares";
    }
    if(selec2=='e'){
      total=valor*0.85;
      cout<<"su cambio es de "<<valor<<" euros "<<"a $"<<total<<"dolares";
    }
    if(selec2=='l'){
      total=valor*0.76;
      cout<<"su cambio es de "<<valor<<" libras "<<"a $"<<total<<"dolares";
    }
    else{
      cout<<"\nlo lamento no reconozco "<<selec2<<" es invalido";
    }
  }
  else{
    cout<<"\nlo lamento no reconozco "<<selec<<" es invalido";
  }


  return 0;
}