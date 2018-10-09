#include <iostream>
#include <string>
using namespace std;

int main()
{
cout << "por favor ingrese su nombre, luego precione enter";
string firstname;
cin >> firstname;
cout << "por favor ingrese su edad";
int edad;
cin >> edad;
cout << "hola, " << firstname << " de " << edad << " años" << "!\n";
  return 0;
}