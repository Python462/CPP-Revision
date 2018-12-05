#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int x,p;
	int y;
	public:
		student()
		{
			cout<<"Default constructor\n";
		}
			student(int p,int q)
		{
			x=p;y=q;
			cout<<p<<" "<<q<<" Parameterized constructor\n";
		}
		student(student &f)      //copy constructor //we can't make copy constructor as (student f) otherwise 
		                          //recursion will take place ...so & is used make it refrence.
		{
			x=f.x;
			y=f.y;
			cout<<x<<" "<<y;
		}
		
};
main()
{
	student s(5,6),d;
	student e(s);               
}
