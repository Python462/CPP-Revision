#include<iostream>

using namespace std;

struct employe
{
	int id;
	char name[20];
	double salary;
};

main()
{
	employe *e=new employe[3];
	employe *e1=e;
	for (int i=0;i<3;i++)
	{
		cin>>e->id>>e->name>>e->salary;
		e=e+1;
	}
	
		for (int i=0;i<3;i++)
	{
		cout<<e1->id<<" "<<e1->name<<" "<<e1->salary<<"\n";
		e1++;
	}
}
