#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
  vector<string> malas;
  vector<string> palabras;
  string nel="";
  malas.push_back("maldicion");
  malas.push_back("jodido");
  malas.push_back("puto");
  while (nel!="#"){
    cin>>nel;
    palabras.push_back(nel);
  }
  for(int i=0; i<palabras.size(); i++){
    for(int y=0; y<malas.size(); y++){
      if(palabras[i]==malas[y]){
        palabras[i]="piiii";
      }
    }
  }
  for(int z=0; z<palabras.size(); z++){
    cout<<palabras[z]<<" ";
  }
}

