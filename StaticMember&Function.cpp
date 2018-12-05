#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	static int x;
	int y;
	public:
		int fun();
		static void var(int p)  //Static Member Function
		{
			x=p;
			//y=p;
			cout<<p<<"\n";
		}
		void fun1(int a,int b)
		{
			x=a,y=b;
	        cout<<x<<" "<<y;
       }
};
int student::x=98;           //For static member variable
int student::fun()
{
	cout<<"\nInside Fun()";
}
main()
{
	student s;
	student::var(78);  // Can be directly accessed without any object
	s.fun1(3,5);
		s.fun();
}
