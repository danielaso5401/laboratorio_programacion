#include <iostream>
#include<vector>
#include <string>
using namespace std;
int main() {
vector<double>numeros;
vector<double>metros;
string unidad;
string conv;
double a;
double r;
int i=0;
int x=0;
int total;
int l;
int p;
int q;
while(cout<<"ingresa un valor", cin>>a){
  cout<<"ingresa tu medida \n -cm \n -m \n -in \n -ft \n";
  cin>>unidad;
  if(unidad=="cm"){
    cout<<"ingresa en que medida quiere convertir \n -m \n -in \n -ft \n";
    cin>>conv;
    if(conv=="m"){
      r=a*0.01;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n'; 
      numeros.push_back(a);
      metros.push_back(a);
    }
    else if(conv=="in"){
      r=a*0.393701;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else if(conv=="ft"){
      r=a*0.0328084;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else{
      cout<<"el caracter es invalido";
    }
  }
  else if(unidad=="m"){
    cout<<"ingresa en que medida quiere convertir \n -cm \n -in \n -ft \n";
    cin>>conv;
    metros.push_back(a);
    if(conv=="cm"){
      r=a*100;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else if(conv=="in"){
      r=a*39.3701;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else if(conv=="ft"){
      r=a*0.0328084;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else{
      cout<<"el caracter es invalido";
    }
  }
  else if(unidad=="in"){
    cout<<"ingresa en que medida quiere convertir \n -cm \n -m \n -ft \n";
    cin>>conv;
    if(conv=="cm"){
      r=a*2.54;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else if(conv=="m"){
      r=a*0.0254;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
      metros.push_back(a);
    }
    else if(conv=="ft"){
      r=a*0.0833333;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else{
      cout<<"el caracter es invalido";
    }
  } 
  else if(unidad=="ft"){
    cout<<"ingresa en que medida quiere convertir \n -cm \n -m \n -in \n";
    cin>>conv;
    if(conv=="cm"){
      r=a*30.48;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else if(conv=="m"){
      r=a*0.3048;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
      metros.push_back(a);
    }
    else if(conv=="in"){
      r=a*12;
      cout<<"su conversion es de "<<a<<unidad<<" a "<<r<<conv<<'\n';
      numeros.push_back(a);
    }
    else{
      cout<<"el caracter es invalido\n";
    }
  }
  else{
    cout<<"el caracter es invalido\n";
  }

}
for (x=0; x!=metros.size(); x++){//imprime todos los valores ingresados en metros
  total=total+metros[x];
  cout<<"la suma de valores es "<<total<<"m \n";
}
p=numeros.size();
for(l=0; l!=numeros.size(); l++){
  for(p=0; p!=numeros.size(); p++ ){
    if(numeros[l]>numeros[p]){
      numeros[l]=numeros[p];
    }
  }
}
for(q=0; q!=numeros.size(); q++ ){
  cout<<numeros[p]<<"-";
}


  return 0;
}