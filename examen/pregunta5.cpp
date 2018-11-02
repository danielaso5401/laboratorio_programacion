#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  vector<string>nombre;
  vector<int>puntaje;
  string ing;
  int puntos;
  while(cin>>ing and cin>>puntos){
    
    nombre.push_back(ing);
    puntaje.push_back(puntos);
    for(int x=0; x!=nombre.size(); x++){
        int y=1;
        if(nombre[x]==nombre[y]){
          cout<<"repitio nombre lo lamento\n";
          x--;
        }
        y++;
      }
    }
  }
 