#include<iostream>
using namespace std;

main()
{
	int n,a,l=0;
	cout<<"enter the number\n";
	cin>>n;
	a=n;
	while(a!=0)
	{
		l++;
		a=a/10;
	}
	cout<<l;
}
