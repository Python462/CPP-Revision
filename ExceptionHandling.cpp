#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter Value Of a and b\n";
	cin>>a>>b;
	tx:
	try
	{
		if(b!=0)
		{
			cout<<"\nb="<<a/b;
		}
		else                            //there is an exception
		{
			throw(b);                   //throw b
		}
	}
	catch(int i)                        //catch b
	{
		cout<<"b can't be zero enter other value\n";
		cin>>b;
		goto tx;
	}
}
