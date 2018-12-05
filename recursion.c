#include<stdio.h>
rec(int x)
{
	if(x==1)
	return 1;
	else
	return(x*rec(x-1));
	
}
main()
{
	int t;
	t=rec(4);
	printf("%d",t);
}
