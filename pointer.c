#include<stdio.h>
main()
{
	int *p,i,ar[5]={1,2,3,4,5};
	//p=&ar;
	p=(int*)malloc(20);
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=2;i<4;i++)
	{
		*(p+i)=*(p+i+1);
	}
	//p=&ar;
	for(i=0;i<4;i++)
	{
		printf("%d ",*(p+i));
		//*(p+i)=*(p+i+1);
	}
	
}
