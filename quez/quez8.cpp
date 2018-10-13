#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
string l;
string p;
char op;
int a;
int y;
while (cin>>l and cin>>p and cin>>op){
  if(l=="cero"){
    a=0;
  }
  else if(l=="uno"){
    a=1;
  }
  else if(l=="dos"){
    a=2;
  }
  else if(l=="tres"){
    a=3;
  }
  else if(l=="cuatro"){
    a=4;
  }
  else if(l=="cinco"){
    a=5;
  }
  else if(l=="seis"){
    a=6;
  }
  else if(l=="siete"){
    a=7;
  }
  else if(l=="ocho"){
    a=8;
  }
  else if(l=="nueve"){
    a=9;
  }
  else if(l=="0"){
    a=0;
  }
  else if(l=="1"){
    a=1;
  }
  else if(l=="2"){
    a=2;
  }
  else if(l=="3"){
    a=3;
  }
  else if(l=="4"){
    a=1;
  }
  else if(l=="5"){
    a=5;
  }
  else if(l=="6"){
    a=6;
  }
  else if(l=="7"){
    a=7;
  }
  else if(l=="8"){
    a=8;
  }
  else if(l=="9"){
    a=9;
  }
  else{
    cout<<"el valor es incorrecto \n";
  }
  if(p=="cero"){
    y=0;
  }
  else if(p=="uno"){
    y=1;
  }
  else if(p=="dos"){
    y=2;
  }
  else if(p=="tres"){
    y=3;
  }
  else if(p=="cuatro"){
    y=4;
  }
  else if(p=="cinco"){
    y=5;
  }
  else if(p=="seis"){
    y=6;
  }
  else if(p=="siete"){
    y=7;
  }
  else if(p=="ocho"){
    y=8;
  }
  else if(p=="nueve"){
    y=9;
  }
  else if(p=="0"){
    y=0;
  }
  else if(p=="1"){
    y=1;
  }
  else if(p=="2"){
    y=2;
  }
  else if(p=="3"){
    y=3;
  }
  else if(p=="4"){
    y=1;
  }
  else if(p=="5"){
    y=5;
  }
  else if(p=="6"){
    y=6;
  }
  else if(p=="7"){
    y=7;
  }
  else if(p=="8"){
    y=8;
  }
  else if(p=="9"){
    y=9;
  }
  else{
    cout<<"el valor es incorrecto \n";
  }
  switch(op){
    case'+':
    cout<<"-"<<a+y<<"\n";
    break;
    case'-':
    cout<<"-"<<a-y<<"\n";
    break;
    case'*':
    cout<<"-"<<a*y<<"\n";
    break;
    case'/':
    cout<<"-"<<a/y<<"\n";
    break;
    default:
    cout<<"valor incorrecto \n";
  }
}
}
