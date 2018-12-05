#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
main()
{

	int len;
	char*ptr;
	cout<<"Enter the size of array";
	cin>>len;
	ptr=new char[len];
	
	delete ptr;
	getch();
}
