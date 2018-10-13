#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  unsigned long long s=1;
  int cont=0;
  int num=1;
  for(cont=0; cont!=64; cont++){
    s=s*2;
    cout<<"la casillas "<<num<<" tiene "<<s<<" semillas"<<"\n";
    num++;
  }
  
  
  return 0;
}