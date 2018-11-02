#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string>moda;
  vector<string>ganador;
  moda.push_back("hola");
  moda.push_back("como");
  moda.push_back("estas");
  moda.push_back("hola");
  moda.push_back("como");
  moda.push_back("hola");
  moda.push_back("adios");
  string cont=0;
  for(int i=0; i!=moda.size(); i++){
    for(int y=0; y!=moda.size(); y++){
      if(moda[i]==moda[y]){
        cont=moda[i];
        ganador.push_back(cont);
      }
    }
  }
  for(int r=0; r!=ganador.size(); r++){
    cout<<ganador[r]<<" ";
  }


  return 0;
}