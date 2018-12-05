#include<iostream>
using namespace std;
int sum(int *,int*);
main()
{
	int a=5,b=6;
	int s=sum(&a,&b);
	cout<<s;
}
    int sum(int *x,int *y)
    {
    	return(*x+*y);
	}
