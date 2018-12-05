#include<stdio.h>
main()
{
	int *p;
	int i,n;
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	
	for (i=0;i<n;i++)
	{
		scanf("%d",p+i);
		
	}
		for (i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
		

