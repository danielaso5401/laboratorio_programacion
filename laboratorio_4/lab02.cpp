#include <iostream>

namespace inocent
{
  void f(int z)
  {
    int x;
    x=7;
  }
}
namespace dangerous
{
  void f(int z)
  {
    int x=7;
    if(z>x)
    {
    }
    //x=7 es un error de inicializacion 
  }
}
int main(){
  return 0;
}