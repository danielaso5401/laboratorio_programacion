#include <iostream>
using namespace std;
int main() {
  cout<<"por favor ingrese un digito \n";
  char a;
  cin>>a;
  switch (a){
  case '0': case '2': case '4': case '6': case '8':
    cout<<"es para \n";
    break;
  case '1': case '3': case '5': case '7': case '9':
    cout<<"es inpar \n";
    break;
  default:
   cout<<" no es un digito\n";
   break;  
  }
  return 0;
}