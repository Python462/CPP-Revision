#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char c[30],d[30];
	ofstream fout("item");
	ifstream fin("item");
	cin.getline(c,30);
	fout<<c;
	
	while(fin)
	{
		fin>>d;
		cout<<c;
	}
	
}
