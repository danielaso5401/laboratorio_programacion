#include <iostream>
#include <vector>
#include <string>
using namespace std;
int area (int length, int width);
int main() {
 int s1 = area(7,4);
 int s2 = area(7,1);
 int s3 = area(7,2);
 int s4 = area(7,3);
 return area(4,4);
}
int area(int length, int width){
  return length*width;
}
