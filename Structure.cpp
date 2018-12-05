#include<iostream>
#include<string.h>
using namespace std;
struct book
{
	int bookid;
	char title[50];
	float price;
};
book b1;               //global type object
main()
{
	book b2={12,"Sumita arrora",57.3};
	cout<<b2.bookid<<" "<<b2.price<<" "<<b2.title<<"\n";
	b1.bookid=15;
	b1.price=32;
	strcpy(b1.title,"C++ by Vikrant");
	//b1=b2;
	cout<<b1.bookid<<" "<<b1.price<<" "<<b1.title;
}
