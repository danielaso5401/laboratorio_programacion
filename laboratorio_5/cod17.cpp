#include <iostream>
#include <vector>
using namespace std;

struct date
{
  date(int y, int m, int d){   }
};
namespace good
{
  const date default_date(1970,1,1);
}
namespace better
{
  const date default_date()
  {
    return date(1970,1,1);
  }
}
namespace best
{
  const date& default_date()
  {
    static const date dd(1970,1,1);
    return dd;
  }
}
int main()
{
  date d1= good::default_date;
  date d2= better::default_date();
  date d3= best::default_date();
}