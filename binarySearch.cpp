#include<iostream>
using namespace std;
main()
{
	int n;
	int a[10]={4,5,8,7,6,3,9,8,2,1};
	cout<<"Enter the no. to be searched";
	cin>>n;
	
	for(int i=0;i<10;i++)
	for(int j=0;j<10-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	int s,l,m;
	int flag=0,pos;
	s=0,l=9;
	while(s<=l)
	{
		int m=(s+l)/2;
		if(a[m]==n)
		{
			flag=1;
			pos=m;
			break;
		}
		if(m>n)
			l=m-1;
			if(m<n)
			s=m+1;
	}
	if(flag==1)
	cout<<"No is found at position";
}
