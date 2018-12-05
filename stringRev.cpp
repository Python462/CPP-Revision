#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

main()
{
	string str;
	cout<<"Enter any string \n";
	cin>>str;
	string str2(str);
	cout<<"\t your string is "<<str2;	
	reverse(str2.begin(),str2.end());
	cout<<" \n Reversed tring is \t"<<str2;
	
}
