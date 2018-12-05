#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int x;
	int y;
	public:
		int fun();
		student()
		{
			cout<<"Default constructor\n";
		}
			student(int p)
		{
			cout<<p<<" Parameterized constructor\n";
		}
			~student()
		{
			cout<<"Destructor\n";
	    }
};
int student::fun()
{
	cout<<"\nInside Fun()\n";
}
main()
{
	student s=5,d;
	s.fun();

}
