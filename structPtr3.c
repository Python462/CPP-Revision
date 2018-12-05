#include<stdio.h>
#include<conio.h>
void main()
{
	struct book
	{
	//	char *name;
		int pag;
		int col;
	};
	int *p;
	struct book b1;
//	struct book *ptr;
	char nm[10]="raman";
	int pg=50;
//	b1.name=nm;
	b1.pag=pg;
	b1.col=48;
	p=&b1.pag;
    printf("\n%d %d",*(--p),*(++p));
	//printf("\n%s %d",b1->name,*b1->pag);
	
}
