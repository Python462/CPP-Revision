#include<iostream>
using namespace std;
class A
{
	public:
		
    virtual void fun()    //late binding ,that is pointer content is seen
	{                        //instead of pointer type
		cout<<"Class A fun";
	}
	
	void fun1()
	{
		cout<<"Class A fun1";
	}
};

class B:public A
{
	public:
  	void fun()        //method overriding
	{
		cout<<"Class B fun";
	}
	
	void fun1()
	{
		cout<<"Class B fun1";
	}
};

main()
{
A *p,a;
B b;
p=&b;
p->fun();
p->fun1();

}
