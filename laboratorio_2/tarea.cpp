#include <iostream>
using namespace std;

int main(){
char nombre[20]; int edad; char nombre2[20]; char fecha1[20]; char fecha2[20]; char fecha3[20]; 
char pais[10]; int sexo;
cout<<"ingresa la fecha \n primero año"; cin>>fecha1;
cout<<" segundo mes"; cin>>fecha2;
cout<<" tercero dia"; cin>>fecha3;
cout<<" "<<fecha1<<"/"<<fecha2<<"/"<<fecha3<<"\n";
cout<<" ingresa tu ciudad"; cin>>pais;
cout<<" tu eres de la ciudad de "<<pais<<"\n";
cout<<" ingresa tu nombre"; cin>>nombre;
cout<<" tu nombre es "<<nombre<<"\n";
cout<<" ingresa tu edad"; cin>>edad;
if (edad < 18){
  cout<<" aun eres menor de edad \n";
}
if (edad > 17){
  cout<<" tu ya eres mayor de edad \n";
}
if (edad == 59){
  cout<<" tu ya estas viejo lo lamento \n";
}
cout<<" ingresa 1. si eres hombre \n ingresa 2 si eres mujer \n "; cin>>sexo;
if (sexo == 1){
  cout<<" eh que bueno tu eres un hombre \n";
}
if (sexo == 2){
  cout<<" eh que bueno eres mujer \n";
}
if (sexo>2){
  cout<<"¿no mames que rayos eres tu? \n";
}
cout<<" ingresa el nombre a quien va la carta"; cin>>nombre2;
cout<<" la carta va dirijidad para "<<nombre2<<"\n";
cout<<"\n" <<fecha1<<"/"<<fecha2<<"/"<<fecha3<<"-"<<pais<<"\n"<<"hola soy "<<nombre<<" como estas a los tiempos bueno yo ya tengo "<<edad<<" años "<<" te escribo a ti "<<nombre2<<" solo para saludarte y contarte como me va \n"<<"atenamente \n "<<nombre;
  return 0;
}