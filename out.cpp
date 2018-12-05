#include<iostream>
using namespace std;
void abc(int a,int b=10)
{
	cout<<a;
	cout<<b;
}
main()
{
	int i;

	for(i=1;i<=2;i++)
	{
		abc(1);
		abc(i,4);
		cout<<endl;
	}
}
