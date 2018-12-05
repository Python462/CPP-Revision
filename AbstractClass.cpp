#include<iostream>
using namespace std;
class A
{
	public:
		
    virtual void fun()=0;   //pure virtual function
        void fun1()          //It is required so that one can't make the object of class A
        {
		cout<<"Its fun1()";	 //And thus Abstract Class is created ...with help of pure virtual function
		}
		
};
class B:public A
{
	public:
		void fun()       //necessary for method overriding
		{
			
		}
};
	main()
	{
	A a;
	//B b;
	//b.fun1();
	cout<<"hello";	
	}	   
