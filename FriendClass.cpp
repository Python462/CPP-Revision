#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	friend class B;	
};
 class B 
 { int y=5;
 	public:	
 };
 main()
 {
 	A a;
 	B b;
 	cout<<b.x;
 }
