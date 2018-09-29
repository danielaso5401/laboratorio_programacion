#include <iostream>
using namespace std;
int main() {
  const double cm_per_inch =2.54; //#cm por pulgada
  int length = 1;
  char unit = 'a';
  cout<<"por favor ingrese una longitud y su unidad:\n";
  cin>>length>>unit;
  switch (unit){
  case 'i':
    cout<<length<<"in =="<< cm_per_inch*length<<" cm\n";
    break;
  case 'c':
    cout<<length<<"cm =="<<length/cm_per_inch*length<<" in\n";
    break;
  default:
    cout<<"lo siento no conosco esa unidad "<<unit<<"\n";
    break;
  }

  return 0;
}