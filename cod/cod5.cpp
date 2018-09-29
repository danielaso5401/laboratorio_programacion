#include <iostream>
using namespace std;
int main() {
  const double cm_per_inch=2.54;// numero de cm en un
  int length=1; //longitud
  char unit ='_'; //espacio (no es unidad) 
  cout<<"por favor ingrese una longitud seguidad de su unidad ( c o i):\n";
  cin>>length>>unit;
  //continuara .....(*)
  if (unit == 'i')
    cout << length<<"in =="<<cm_per_inch*length<<"cm==";
  else if (unit=='c')
    cout<<length<<"cm=="<<length/cm_per_inch<<"in\n";
  else 
    cout<<"lo siento no conosco una  unidad llamada"<<unit<<"\n";
  return 0;
}