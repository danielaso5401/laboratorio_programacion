//Memoria, direcciones y punteros
#include<iostream>
using namespace std;

int main()
{
	int var=17;
	int* tr=&var;
	
	char ch='c';
	char* pc=&ch;
	
	int ii=17;
	int* pi=&ii;
	
	cout<<"pc=="<<pc<<"; contenido de pc=="<<*pc<<endl;
	cout<<"pi=="<<pi<<"; contenido de pi=="<<*pi<<endl;
	*pc='x';
	*pi=27;
	*pi=*pc;
	{
		char ch1='a';
		char ch2='b';
		char ch3='c';
		char ch4='d';
	}
}
