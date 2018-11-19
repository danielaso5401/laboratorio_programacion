#include <iostream>
using namespace std;
class date{
  int y, m, d;
  public:
    date(int y, int m, int d);
    void add_day(int n);
    int month(){return m;}
    int day(){return d;}
    int year(){return y;}
};
date::date(int y, int m, int d) : y(y), m(m), d(d){}
int main()
{
  date birthday(1970, 12, 30);
  cout<<birthday.month()<<endl;
}


