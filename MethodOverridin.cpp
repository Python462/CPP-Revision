#include<iostream>
using namespace std;
class A
{
	public:
	void fun()
	{
		cout<<"Class A fun";
	}
	
		void fun1()
	{
		cout<<"Class A fun1";
	}
	void fun2()
	{
		cout<<"Class A fun2";
	}
};

class B:public A
{
	public:
	void fun()        //method overriding
	{
		cout<<"Class B fun\n";
	}
		void fun1(int x)                 //method hiding
	{
		cout<<"Class B fun1 "<<x;
	}
};

main()
{
	B b;
	b.fun();
	//b.fun1();//error
	b.fun1(4);
	b.fun2();
}
