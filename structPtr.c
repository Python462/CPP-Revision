#include<stdio.h>
#include<conio.h>
main()
{
	struct book
	{
		char name[20];
		int pag;
	};
	struct book b1={"java",20
	};
	struct book *ptr;
	ptr=&b1;
	printf("\n%s %d",b1.name,b1.pag);
	printf("\n%s %d",ptr->name,ptr->pag);
	
}
