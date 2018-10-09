#include <iostream>
using namespace std;
int main(){
  int cero=0; int uno=1; int dos=2; int tres=3; int cuatro=4; int eleccion=0;
  cout<<"ingrese una de las cuatro opciones entre el 1; 2; 3; 4"; cin>>eleccion;
  if (eleccion==cero){
    cout<<"cero";
  }
  else if (eleccion==uno){
    cout<<"uno";
  }
  else if (eleccion==dos){
    cout<<"dos";
  }
  else if (eleccion==tres){
    cout<<"tres";
  }
  else if (eleccion==cuatro){
    cout<<"cuatro";
  }
  else {
    cout<<"no es un numero dentro de la lista que curioso";
  }
}