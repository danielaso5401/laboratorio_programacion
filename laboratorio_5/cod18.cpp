#include <iostream>
#include<random>
using namespace std;
int randint(int min, int max)
{
  random_device rd;
  uniform_int_distribution<int>dist(min, max);
  return dist(rd);
}
int randint(int max){ return randint(0, max);}
int main()
{
  for(int i=0; i<20; i++)
    cout<<randint(0,9)<<" ";
  cout<<endl;
  return 0;
}