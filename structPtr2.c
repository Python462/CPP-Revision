#include<stdio.h>
#include<conio.h>
main()
{
	struct book
	{
		char *name;
		int *pag;
	};
	struct book b1;
//	struct book *ptr;
	char nm[10]="raman";
	int pg=50;
	b1.name=nm;
	b1.pag=&pg;
	printf("%s %d",b1.name,*b1.pag);
	printf("\n%s",b1.name);
//	printf("\n%s %d",b1->name,*b1->pag);
	
}
