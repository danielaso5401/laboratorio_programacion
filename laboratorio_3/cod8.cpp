#include <iostream>
#include <vector>
using namespace std;
int main()
try
{
  vector<int>v;
  for(int x; cin>>x and x!='c';)
    v.push_back(x);
  for(int i=0; i<=v.size()+1; ++i)
    cout<<"v["<<i<<"] == "<<v[i]<<'\n';
  } catch (out_of_range){
    cerr<<"Oops! error de rango\n";
    return 1;
  }
  catch(...)
  {
    cerr<<"error algo salio mal\n";
    return 2;
  }

