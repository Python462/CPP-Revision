#include <iostream>
using namespace std;

int j=1;
fun(int n)
{
	int x=1,k;
	if(n==1)
	{
	return x;
	}
	else
	for(k=1;k<n;++k)
	{
		
		//cout<<j++<<"\n";
		return(x+fun(n-k)*fun(n-k));
	}
}

main()
{
	cout<<fun(3);
}
