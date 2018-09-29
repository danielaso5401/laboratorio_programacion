#include <iostream>
#include <vector>
using namespace std;
#include <string>
int main()
{
  vector<string> words;
  string temp;
  while (cin>>temp)//leer palabras separadas por" "
    words.push_back(temp); //poner en el vector
  cout<<"numero de palabras:_"<<words.size()<<endl;
  // ordenar inici a fin
  sort(words.begin(), words.end());
  for(int i=0; i<words.size(); ++i)
    //es una plabra nueva
    if (i==0 and  words[i-1]!=words[i])
      cout<<words[i]<<"\n";

}
