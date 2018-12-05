#include<iostream>
using namespace std;
inline int sum(int &,int&);
main()
{
	int a=5,b=6;
	int s=sum(a,b);
	cout<<a<<" "<<b;
}
    int sum(int &x,int &y) //call by refrence
    {
    	x++;
    	y++;
    	cout<<x<<" "<<y<<"\n";
	}
