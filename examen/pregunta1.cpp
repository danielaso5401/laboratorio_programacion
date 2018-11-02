#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<string> oponente;
  oponente.push_back("piedra");
  oponente.push_back("papel");
  oponente.push_back("tijera");
  oponente.push_back("papel");
  oponente.push_back("papel");
  oponente.push_back("piedra");
  oponente.push_back("tijera");
  oponente.push_back("papel");
  oponente.push_back("piedra");
  oponente.push_back("papel");
  oponente.push_back("tijera");
  oponente.push_back("papel");
  oponente.push_back("papel");
  oponente.push_back("piedra");
   oponente.push_back("tijera");
  oponente.push_back("papel");
  oponente.push_back("papel");
  oponente.push_back("piedra");
  oponente.push_back("tijera");
  oponente.push_back("papel");
  cout<<"ingresa 1 para jugar con tijera \n ingresa 2 para jugar con papel \n ingresa 3 para jugar con piedra";
  int jugador; 
  int ganador=0; 
  int perdedor=0;
  int i=0;
  while(ganador!=3){
    cin>>jugador; 
    switch(jugador){
      case 1:
        if(oponente[i]=="tijera"){
          cout<<"empate";
        }
        if(oponente[i]=="piedra"){
          cout<<"perdiste contra una piedra";
          perdedor++;
        }
        if(oponente[i]=="papel"){
          cout<<"ganaste contra papel";
          ganador++;
        }
      break;
      case 2:
        if(oponente[i]=="papel"){
          cout<<"empate";
        }
        if(oponente[i]=="tijera"){
          cout<<"perdiste contra tijera";
          perdedor++;
        }
        if(oponente[i]=="piedra"){
          cout<<"ganaste contra piedra";
          ganador++;
        }
      break;
      case 3:
        if(oponente[i]=="piedra"){
          cout<<"empate";
        }
        if(oponente[i]=="papel"){
          cout<<"perdiste contra papel";
          perdedor++;
        }
        if(oponente[i]=="tijera"){
          cout<<"ganaste contra tijera";
          ganador++;
        }
      break;
    }
    i++;
  }
  if(ganador==3){
    cout<<"\nganaste";
  }
  else{
    cout<<"\nperdiste";
  }
  
  
  return 0;
}