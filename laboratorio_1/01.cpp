#include <iostream>
using namespace std;
int main()
{
  int numeros[5]={};
  int resultados[5]={}; 
  int count=3;
  int count2=0;
  int y=0;
  cout<<"ingrese el primer numero \n";
  cin>>numeros[0];
  cout<<"ingrese el segundo numero \n";
  cin>>numeros[1];
  cout<<"ingrese el tercero numero \n";
  cin>>numeros[2];
  cout<<numeros[0]<<numeros[1]<<numeros[2];
  while (count!=0)
  {
    while(count2!=4)
    {
      if(numeros[count-3]>numeros[count2])
      {
        numeros[count-3]=resultados[y];
      }
      count2=count2+1;
    }
    y=y+1; count2=0; count=count+1;
  }
  cout<<resultados[0]<<resultados[1]<<resultados[2];

}