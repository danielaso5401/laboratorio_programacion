#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<double> temps; //temperatura
  double temp;
  while (cin>>temp) //lee
    temps.push_back(temp); //pone en vector
    //hacer algo
    //calcular temperatura promedio
    double sum=0;
    for(int i=0; i<temps.size(); ++i)
      sum+=temps[i];
    cout<< "median_temperature:_"<<temps[temps.size()/2]<<endl;
}
