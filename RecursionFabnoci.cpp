#include<iostream>
using namespace std;
fab(int n)
{
	if(n==1||n==2)
	return(1);
	else
	return(fab(n-1)+fab(n-2));
}
	main(void)
	{
		for(int i=1;i<=5;i++)
		cout<<fab(i)<<"\n";
	}
	
