#include<iostream>
using namespace std;
main()
{
	int x=5;
	int *p;
	p=&x;
	int &y=x;//refrence variable
    cout<<y<<" "<<x<<" "<<*p;
	printf("\n%d",y);
}
