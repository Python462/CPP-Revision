#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char ch;
	ifstream fin;
	fin.open("file.dat",ios::in);
	fin.get(ch);
	while(!fin.eof())
	{
		cout<<ch;
		fin.get(ch);
	}
}
