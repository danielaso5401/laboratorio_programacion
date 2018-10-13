#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
  double num1;
  double num2;
  char op;
  while(cin>>num1 and cin>>num2){
    cin>>op;
    switch(op){
      case'+':
      cout<<num1+num2;
      break;
      case'-':
      cout<<num1-num2;
      break;
      case'*':
      cout<<num1*num2;
      break;
      case'/':
      cout<<num1+num2;
      break;
      default:
      cout<<"el valor ingresado es incorrecto";

    }
  }
  return 0;
}