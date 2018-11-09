#include <iostream>

void f()
{
  //g(); error: g() no esta en el escope
}
void g()
{
  f(); // ok f( )esta en el escope
}
void h()
{
  int x=0;
  int y=x;
  g();
}
int main()
{
  h();
}
