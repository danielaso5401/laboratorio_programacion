#include <iostream>
#include <vector>
int main() 
{
  int a;
  double d=7;
  vector<int> vi(10);
  const int x=7;
  const int x2(9);
}
namespace innocent
{
  void f(int z)
  {
    int x;
    int x=7;
  }
}
namespace dangerous
{
  void f(int z)
  {
    int x;
    if(z>x){
    }
    x=7;
  }
}