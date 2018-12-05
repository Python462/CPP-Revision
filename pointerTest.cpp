#include<iostream>
using namespace std;

main()
{
int a[5]={1,2,3,4,5};
int *p=&a[4];
for(int i=0;i<5;i++)
{
cout<<*p;
*p=1;	
}	
}
