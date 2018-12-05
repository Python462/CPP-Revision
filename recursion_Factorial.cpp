#include<stdio.h>

long fact(int a)
{
	if(a==1)
	return 1;
	else
	return(a*fact(a-1));
}

main()
{
	printf("%ld",fact(5));	
}
