#include <iostream>
#include<vector>
using namespace std;
int main() {
  double y=0;
  double r=0;
  int i=0;
  while(cin>>y){
    if(i==0){
      cout<<"hasta ahora el mayor numero es "<<y<<'\n';
      r=y;
      i++;
    }
    if(r>y){
      cout<<"hasta ahora el mayor numero es "<<r<<'\n';
      cout<<"hasta ahora el menor numero es "<<y<<'\n';
    }
    if(r<y){
      cout<<"hasta ahora el mayor numero es "<<y<<'\n';
      cout<<"hasta ahora el menor numero es "<<r<<'\n';
    }
  }
  
  return 0;
}