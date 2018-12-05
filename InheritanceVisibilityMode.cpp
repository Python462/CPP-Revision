#include<iostream>
using namespace std;
class B;
class A
{
	private:
	int x;
	protected:
		int  y;
	public:
	    int z;
};
class B:public A
{
	private:
	int p;
	protected:
		int q;
	public:
		int r;
		void fun()
		{
			z=3;y=4;
			cout<<z<<" "<<y;
		}
};
main()
{
A c1;
B c2;
//c1.z=5;
//cout<<c1.z;
c2.fun();
}
