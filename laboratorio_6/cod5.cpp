#include <iostream>
int main()
{
  date today;
  today.y=2005;
  today.m=24;
  today.d=12;
  date x;
  x.y=-3;
  x.m=13;
  x.d=32;
  date y;
  y.y=2000;
  y.m=2;
  y.d=29;
  init_day(y, 200, 1, 1);
  add_day(y, 28);
  return 0;

}