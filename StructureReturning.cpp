#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char c[20],d[20];
string s;
struct book
{
	int bookid;
	char title[50];
	float price;
};
book input(book);
book b1;
main()
{
	book b2;
	b1=input(b2);
	cout<<b1.bookid<<" "<<b1.title<<" "<<b1.price;
}
book input(book b)
{
	cout<<"Enter book_id ,Title and price \n";
	cin>>b.bookid;
	fflush(stdin);
	gets(c);
	strcpy(b.title,c);
	cin>>b.price;
	return(b);
	}
