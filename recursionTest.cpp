#include <iostream>
using namespace std;
int x=0;
fun(int n)
{
	if(n==1)
	{
	return 2;
	}
	else
	{
	x=3+n+fun(n-1);
	}
	return(x);
}

main()
{
	cout<<fun(3);
}
