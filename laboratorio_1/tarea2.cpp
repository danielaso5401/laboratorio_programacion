#include<iostream>
#include<string>
using namespace std;
int main()
{
  cout <<"ingresa dos nombres \n";
  string first;
  string second;//al cambiar por int en string solo reconoce el primer valor y manda error
  cin >> first >> second;
  if (first==second) cout << " ambos son iguales \n";
  if (first < second)
    cout << first << "  esta antes";
  if (first > second)
    cout << first << "  esta despues";
}