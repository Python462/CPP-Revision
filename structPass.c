#include<stdio.h>
#include<conio.h>

void main()
{
	struct book
	{
		char name[20];
		int pag;
	};
	struct book b1={"raman",30};
	print(b1.name,b1.pag);
	printf("\n%s %d",b1.name,b1.pag);
	
}
print(char *s;int t)
{
		printf("\n%s %d",s,t);
}
