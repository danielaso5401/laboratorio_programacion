#include <iostream>
#include <vector>
#include <string>
using namespace std;
int  area(int lengt, int width);
int main() {
  int x0 = area(7,7);
  int x1= area(7,3);
  int x2 = area(7,2);
  return area (4,4);
}
int area(int length , int width){
  return length*width;
}