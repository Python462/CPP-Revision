#include<stdio.h>
main()
{
	struct  book
	{
		char name[100];
		int price;
		int page;
		
	};
	int b1;
	struct book *ptr;
	*ptr=&b1;
	scanf("%s%d%d",b1.name,&b1.price,&b1.page);
	
	printf("%s%d%d",b1->name,b1->price,b1->page);
	
	
	
	
	
	}
