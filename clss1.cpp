//1.WAP in cpp to create a structure with tag  name employe_type with 4 diffrent members..
//read the data value for one employe and print the value on the screen..

#include<iostream>
using namespace std;
struct emp
{
	int code;
	char name[25];
	char dept[15];
	float salary;	
};
struct emp e;
main()
{
	cin>>e.code>>e.dept>>e.name>>e.salary;
	cout<<e.code<<e.dept<<e.name<<e.salary;
}
