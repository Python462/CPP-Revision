#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		complex()
		{
		}
		complex(int r)
		{
			x=r,y=0;
		}
		showdata()
		{
			cout<<"x="<<x<<endl<<"y="<<y;
		}
};

main()
{
	complex c;
	int p=5;
	c=p;
	c.showdata();
}
