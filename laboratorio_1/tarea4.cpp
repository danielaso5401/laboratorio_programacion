#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a = 20000;
  char  c = a;
  int b = c;
  if (a != b)
    cout << "uyy! :  "<< a << "!=" << b << "\n";
  else
    cout << "Woooh! Tenemos caracteres grnades \n";  
}