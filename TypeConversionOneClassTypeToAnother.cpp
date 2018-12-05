#include<iostream>
using namespace std;
class item
{
	public:
int x,y;
public:
void setdata(int a,int b)
{
	x=a,y=b;
}	

};
class product
{
	int m,n;
	public:
		product()
	{	
	}
	void showdata()
		{
			cout<<"m="<<m<<" n="<<n;
		}
		
	product(item i)
	{
		m=i.x;
		n=i.y;
	}	
};


main()
{
	item i;

	i.setdata(3,4);
	product p;
	p=i;
	p.showdata();

}
