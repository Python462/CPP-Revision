#include<stdio.h>
int rec(int a[5],int n)
{
	if(n<=0)
	return 0;
	else
	return (rec(a,n-1)+a[n-1]);
}

main()
{
	int sum=0,a[5];
	printf("Enter the 5 no\n");
	for(int j=0;j<5;j++)
	{
		scanf("%d",&a[j]);
	}
	sum=rec(a,5);
	printf("%d",sum);
}
