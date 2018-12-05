#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
		void setdata(int a)
		{
			x=a;
		}
    friend void fun(A,B);
};
class B
{
	int x;
	public:
		void setdata(int a)
		{
			x=a;
		}
    friend void fun(A,B);
};
void fun(A p,B q)
{

	cout<<"\nIn frnd function sum ="<<p.x+q.x;
}
main()
{
A c1;
B c2;
c1.setdata(4);
c2.setdata(5);
fun(c1,c2);
}
