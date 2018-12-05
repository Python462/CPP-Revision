#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
main()
{
	char str[]="Lovely Professional university";
	int len=strlen(str);
	
	char*ptr;
	ptr=new char[len+1];
	
	strcpy(ptr,str);
	
	cout<<"ptr="<<ptr<<endl;
	delete ptr;
	getch();
}
