#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		void setdata(int a,int b)
		{
			x=a,y=b;
		}
		void showdata()
		{
			cout<<"\nx="<<x<<" y="<<y;
		}
    friend void fun(complex);
};
void fun(complex c)
{
	c.showdata();
	cout<<"\nIn frnd function x="<<c.x<<" y="<<c.y;
}
main()
{
complex c1;
c1.setdata(4,5);
fun(c1);
}
