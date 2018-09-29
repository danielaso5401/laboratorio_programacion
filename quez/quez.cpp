#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main() {
  double y, z;
  double total;
  char i;
  while(cin>>y and cin>>z){
    cout<<y<<" "<<z<<'\n';
  if(y>z){
    cout<<y<<" es mayor\n ";
  }
  else if(z>y){
    cout<<z<<" es mayor\n ";
  }
  if(y<z){
    cout<<y<<" es menor\n ";
  }
  else if(z<y){
    cout<<z<<" es menor\n ";
  }
  if(y-z<=1.0/100){
    cout<<"los numeros son casi iguales\n";
  }
  else if(y==z){
    cout<<"los numeros son iguales\n";
  }
  }
}