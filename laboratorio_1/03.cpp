#include <iostream>
using namespace std;
int main() {
  unsigned int a=127; 
  unsigned char c=a;
  unsigned int b=c;
  cout<<a<<"\n"<<c<<"\n"<<b<<"\n";
  if (a==b){
    cout<<"tenemos caracteres gigantes"<<endl;
  }
  else{
    cout<<a<<" es diferente de "<<b<<endl;
  }
  return 0;
}
/*2000 es diferente de -48
b asigna el valor c y c aiga a como -48*/