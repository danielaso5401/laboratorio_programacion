#include <iostream>
using namespace std;
int square(int x){
  return x*x;
}
//-----------------------------
void write_sorry() // no requiere argumentos;
{
  cout<<"sorry\n";
}
//--------------------------------
int main()
{
  cout<<square(2)<<'\n'; //imprime 4
  cout<<square(10)<<'\n'; //print 100
  square(2); //no usaron lo que retorna el square
  //int v1= square();// error : faltan argumentos
  //int v2= square; //error falta de parentesis
  //int v3=square(1,2):// error muchos argumentos
  //int v4=square("two");//error:
  //tipo esperado es int
  write_sorry();
}