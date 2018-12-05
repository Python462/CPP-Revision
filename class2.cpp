#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"how many city name to input";
	cin>>n;
	string s[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		if(s[i][0]=='B'||s[i][0]=='C') //if(s[i].at(0)=='B')
		cout<<s[i]<<"\n";	
	}	
}
