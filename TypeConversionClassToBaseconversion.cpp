#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
	setdata(int a,int b)
	{
		x=a,y=b;
	}
	
		showdata()
		{
			cout<<"x="<<x<<endl<<"y="<<y;
		}	
		
	operator int()                 //operator type()
	{
		return(x+y);                //return (type_data);
	}		
};

main()
{
	complex c;
	c.setdata(3,4);
	int x=c;       //x=c.operator int();
	c.showdata();
	cout<<endl<<x;
}
