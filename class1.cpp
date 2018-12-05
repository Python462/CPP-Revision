#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100];
	
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' ') {
			a[i]='_';
		}		
	}
	cout<<a;
	
}
